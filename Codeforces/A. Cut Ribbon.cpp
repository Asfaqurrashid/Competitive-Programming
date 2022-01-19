#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define INF -1e5
int dp[10001];
int solve(int n, vector<int> v)
{
    if(n<0)
    {
        return INF;
    }
    if(n==0)
    {
        return 0;
    }
    if(dp[n]!=-1)
    {
        return dp[n];
    }
    int best = INF;
    for(int i=0; i<v.size(); i++)
    {
         best = max(best,solve(n-v[i],v)+1);
    }
    return dp[n] = best;
}
int main()
{
    int n,a,b,c;
    cin >> n >> a >> b >> c;
    vector<int> v;
    v.pb(a);
    v.pb(b);
    v.pb(c);
    memset(dp,-1,sizeof(dp));
    cout << solve(n,v) << endl;
    return 0;
}
