#include<bits/stdc++.h>
using namespace std;
const int maxx = 1e5+1;
int f[maxx];
int dp[maxx];
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    map<int,int> m;
    for(int i=0; i<n; i++) cin >> v[i];
    sort(v.begin(),v.end());
    int maximum = *max_element(v.begin(), v.end());
    for(int i=0; i<n; i++)
    {
        f[v[i]] = 1;
        m[v[i]]++;
    }
    int ck = 0;
    for(int i=1; i<=maximum; i++)
    {
        if(f[i])
        {
            ck = ck + m[i];
        }
        dp[i] = ck;
    }
    int q;
    cin >> q;
    while(q--)
    {
        int x;
        cin >> x;
        if(x>=maximum)
        {
            cout << n << endl;
        }
        else
        {
            cout << dp[x] << endl;
        }
    }
}
