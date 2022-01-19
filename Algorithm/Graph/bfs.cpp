#include<bits/stdc++.h>
using namespace std;
vector<int>v[100];

void bfs(int s, int n)
{
    int visited[n+1];
    int dis[n+1];
    memset(dis,0,sizeof(dis));
    memset(visited,0,sizeof(visited));
    queue<int>q;
    q.push(s);
    visited[s] = 1;
    dis[s] = 0;
    while(!q.empty())
    {
        int u = q.front();
        q.pop();
        for(int i=0; i<v[u].size(); i++)
        {
            int k = v[u][i];
            if(!visited[k])
            {
                  visited[k] = 1;
                  dis[k] = dis[u] + 1;
                  q.push(k);
            }

        }
    }
    for(int i=1; i<=n; i++)
    {
        cout << dis[i] << " ";
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
    for(int i=1; i<=n; i++)
    {
        cout << i << " ->  " ;
        for(int j=0; j<v[i].size(); j++)
        {
            cout << v[i][j] << " ";
        }
        cout << "\n";
    }
    int s;
    cin >> s;
    bfs(s,n);
    return 0;
}
