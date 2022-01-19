   #include<bits/stdc++.h>
using namespace std;
#define INF 99999
vector< pair<int, int > >v[1001];
int dp[1001];
int ans  = INF;
int shortestpath(int s, int n)
{

    if(s==n-1)
    {
        return 0;
    }
    if(dp[s]!=INF)
    {
        return dp[s];
    }
    for(int i=0; i<v[s].size(); i++)
    {
         int u = v[s][i].first;
         int w = v[s][i].second;
        dp[s] = min(dp[s],shortestpath(u,n) + w);

    }
    return dp[s];

}
int main()
{
    int n,e;
    cin >> n >> e;
    for(int i=0; i<n; i++)
    {
        dp[i] = INF;
    }
    for(int i=1; i<=e; i++)
    {
        int x,y,w;
        cin >> x >> y >> w;
        v[x].push_back(make_pair(y,w));
    }
    int s;
    cin >> s;
    cout << shortestpath(s,n) << endl;
    for(int i=0; i<n; i++)
    {
        cout << dp[i] << " ";
    }
    return 0;
}
