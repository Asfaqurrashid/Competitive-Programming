#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    int ck = 0;
    for(int i=0; i<n; i++) cin >> v[i];
    double sum = accumulate(v.begin(), v.end(),ck)*1.0/n*1.0;
    sum = sum * 2.0;
    map<int,int> m;
    for(int i=0; i<n; i++)
    {
        m[v[i]]++;
    }
    int ans = 0;
    for(int i=0; i<n; i++)
    {
        ans += m[sum - v[i]];
        if(sum-v[i]==v[i])
        {
            ans--;
        }
    }
    cout << ans/2 << endl;
    return 0;
}
