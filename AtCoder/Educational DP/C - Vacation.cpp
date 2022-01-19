#include<bits/stdc++.h>
using namespace std;
#define Fio() cin.tie(0); ios_base::sync_with_stdio(0)
typedef long long int ll;
ll dp[100005][4];
void f (ll a[][4],ll n)
{
    for(int i=2; i<=n; i++)
    {
        for(int j=1; j<=3; j++)
        {
            for(int k=1; k<=3; k++)
            {
                if(j!=k)
                {
                    dp[i][j] = max(dp[i][j],dp[i-1][k] + a[i][j]);
                }
            }

        }
    }

}
int main()
{
    Fio();
    ll n;
    cin >> n;
    ll a[n+5][4];
    vector<ll> v;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=3; j++)
        {
            cin >> a[i][j];
        }
    }
    if(n==1)
    {
        v.push_back(a[1][1]);
        v.push_back(a[1][2]);
        v.push_back(a[1][3]);
        sort(v.begin(), v.end());
        ll len = v.size() - 1;
        cout << v[len] << endl;
        return 0;
    }
    memset(dp,-1,sizeof(dp));
    dp[1][1] = a[1][1];
    dp[1][2] = a[1][2];
    dp[1][3] = a[1][3];
    f(a,n);
    ll x = max(dp[n][1],dp[n][2]);
     x = max(x,dp[n][3]);
    cout << x << endl;

    return 0;
}
