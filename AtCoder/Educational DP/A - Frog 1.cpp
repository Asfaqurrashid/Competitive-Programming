#include<bits/stdc++.h>
using namespace std;
#define Fio() cin.tie(0); ios_base::sync_with_stdio(0)

int dp[100005];
int f(int a[], int i)
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
    dp[i] = min((abs(a[i]-a[i-1])+f(a,i-1)),(abs(a[i]-a[i-2])+f(a,i-2)));
    return dp[i];

}
int main()
{
    Fio();
    int n;
    cin >> n;
    int a[n+5];
    for(int i=1; i<=n; i++)
    {
        cin >> a[i];
    }
    memset(dp,-1,sizeof(dp));
    dp[1] = 0;
    dp[2] = abs(a[2]-a[1]);
    f(a,n);
    cout << dp[n] << endl;
    return 0;
}
