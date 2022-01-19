#include<bits/stdc++.h>
using namespace std;
int dp[100005];
bool coin_change(int n, vector<int> coin)
{
    if(n<0)
    {
        return 0;
    }
    if(n==0)
    {
        return 1;
    }
    if(dp[n]!=-1)
    {
        return dp[n];
    }
    for(int i=0; i<coin.size(); i++)
    {
       return dp[n] = dp[n] | coin_change(n-coin[i],coin);
    }
}
int main()
{
    int n,k;
    cin >> n >> k;
    vector<int> coin(n);
    for(int i=0; i<n; i++) cin >> coin[i];
    memset(dp,-1,sizeof(dp));
    if(coin_change(k,coin))
    {
        cout << "possible" << endl;
    }
    else
    {
        cout << "Not possible" << endl;
    }

    return 0;
}
