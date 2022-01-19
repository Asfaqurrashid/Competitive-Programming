#include<bits/stdc++.h>
using namespace std;
#define Fio() cin.tie(0); ios_base::sync_with_stdio(0)
typedef long long int ll;
ll ans = 1e12;
ll dp[100005];
ll f(ll a[], ll i, ll k)
{
    if(i==1)
    {
        return 0;
    }
    if(i==2)
    {
        return dp[2];
    }
    if(dp[i]!=-1)
    {
        return dp[i];
    }
    dp[i] = ans;
    for(int j=1; j<=k; j++)
    {
        if((i-j)>=1)
        {
             dp[i] = min(dp[i],(abs(a[i]-a[i-j])+f(a,i-j,k)));
        }


    }

    return dp[i];

}
int main()
{
    Fio();
    ll n,k;
    cin >> n >> k;
    ll a[n+5];
    for(int i=1; i<=n; i++)
    {
        cin >> a[i];
    }
    memset(dp,-1,sizeof(dp));
    dp[1] = 0;
    dp[2] = abs(a[2]-a[1]);
    f(a,n,k);
    cout << dp[n] << endl;
    return 0;
}
