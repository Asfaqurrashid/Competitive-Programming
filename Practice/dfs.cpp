#include<bits/stdc++.h>
using namespace std;
int visited[10001];
vector<int>v[1001];
void dfs(int s)
{
    if(visited[s])
    {
        return;
    }
    visited[s] = 1;
    cout << s << " ";
    for(int i=0; i<v[s].size(); i++)
    {
        dfs(v[s][i]);
    }
}
int main()
{
    int n,e;
    cin >> n >> e;
    for(int i=1; i<=e; i++)
    {
        int x,y;
        cin >> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    int s;
    cin >> s;
    dfs(s);
    return 0;
}
