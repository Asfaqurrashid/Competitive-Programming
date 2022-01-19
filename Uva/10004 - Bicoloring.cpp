#include<bits/stdc++.h>
using namespace std;
#define pb push_back
vector<int>v[205];
vector<int>visited(205,0);
vector<int>color(205,0);
bool bicoloring(int s)
{
    visited[s] = 1;
    color[s] = 0;
    queue<int>q;
    q.push(s);
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
                if(color[u] == 0)
                {
                    color[k] = 1;
                }
                else
                {
                    color[k] = 0;
                }
                q.push(k);
            }
            else if(color[u]==color[k])
            {
                return 0;
            }
        }
    }
    return 1;

}
int main()
{
    int n;
    while(cin>>n)
    {
        if(n==0) break;
        int e;
        cin >> e;
        fill(visited.begin(), visited.end(),0);
        fill(color.begin(), color.end(),0);
        for(int i=0; i<e; i++)
        {
            int x,y;
            cin >> x >> y;
            v[x].pb(y);
            v[y].pb(x);
        }
        if(bicoloring(0)) cout << "BICOLORABLE." << endl;
        else cout << "NOT BICOLORABLE." << endl;
        for(int i=0; i<n; i++) v[i].clear();
    }
    return 0;
}
