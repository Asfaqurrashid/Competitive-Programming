#include<bits/stdc++.h>
using namespace std;
#define MAX 10000
#define endl "\n"
int t = 0;
int d[MAX];
int f[MAX];
int vis[MAX];
vector<int>v[MAX];
vector<int> top;
void dfs(int s)
{
    t += 1;
    vis[s] = 1;
    d[s] = t;
    for(int i=0; i<v[s].size(); i++)
    {
        if(!vis[v[s][i]])
        {
            dfs(v[s][i]);
        }
    }
    top.push_back(s);
    t += 1;
    f[s] = t;
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
    }
    for(int i=1; i<=n; i++)
    {
        if(!vis[i])
        {
            dfs(i);
        }
    }
    reverse(top.begin(), top.end());
    for(int i=0; i<top.size(); i++)
    {
        cout << top[i] << " ";
    }
    cout << endl;
    return 0;
}
