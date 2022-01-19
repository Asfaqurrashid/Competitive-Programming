#include<bits/stdc++.h>
using namespace std;
#define maxx 10000
#define fast cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0)
#define endl "\n"
int dis[maxx][maxx];
int vis[maxx][maxx];
queue<pair<int,int> > q;
pair<int,int> p;
bool valid(int r, int c, int n, int m)
{
    if(r>=0 && r<n && c>=0 && c<m)
    {
        return true;
    }
    else
    {
        return false;
    }
}
void bfsgrid(int r, int c, int n, int m)
{
    vis[r][c] = 1;
    dis[r][c] = 0;
    q.push(make_pair(r,c));
    while(!q.empty())
    {
        p = q.front();
        q.pop();
        int dr[] = {0,0,1,-1};
        int dc[] = {1,-1,0,0};
        for(int i=0; i<4; i++)
        {
            int r = p.first + dr[i];
            int c = p.second + dc[i];
            if(valid(r,c,n,m) && !vis[r][c])
            {
                vis[r][c] = 1;
                dis[r][c] = dis[p.first][p.second] + 1;
                q.push(make_pair(r,c));
            }
        }
    }
}
int main()
{
    fast;
    int n,m;
    cin >> n >> m;
    bfsgrid(0,1,n,m);
   for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cout << dis[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
