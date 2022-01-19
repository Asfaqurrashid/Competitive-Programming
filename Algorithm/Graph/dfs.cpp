#include<bits/stdc++.h>
using namespace std;
#define MAX 1e5
#define pb push_back

vector<int> v[100];
int visited[100];

void dfs(int s, int n)
{

    if(visited[s])
    {
        return;
    }
    visited[s] = 1;
    cout << s << " ";
    for(int i=0; i<v[s].size(); i++)
    {
        dfs(v[s][i],n);
    }
}
int main()
{
    int V,E;
    cin >> V >> E;
    for(int i=1; i<=E; i++)
    {
        int x,y;
        cin >> x >> y;
        v[x].pb(y);
        v[y].pb(x);
    }
    dfs(1,V);
    return 0;
}
