#include<bits/stdc++.h>
using namespace std;
#define pb push_back
int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for(int i=0; i<n; i++)
    {
        int x;
        cin >> x;
        v.pb(x);
    }
    int d,m;
    cin >> d >> m;
    int cnt = 0;
    int sum = 0;
    for(int i=0; i<(n-m); i++)
    {
        for(int j=i; j<(m+i); j++)
        {
            sum += v[j];
        }
        if(sum==d)
        {
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}
