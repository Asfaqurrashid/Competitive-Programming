#include<bits/stdc++.h>
using namespace std;
#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define valid(nx,ny) nx>=0 && nx<R && ny>=0 && ny<C
bool visited[1001][10001];
int dis[1001][1001];
bool box[1001][1001];
void gridbfs(int r, int c, int R, int C)
{
    visited[r][c] = 1;
    dis[r][c] = 0;
    queue<pair<int,int> > q;
    q.push(mp(r,c));
    while(!q.empty())
    {
        pair<int,int> p = q.front();
        q.pop();
        int dx[] = {0,0,1,-1};
        int dy[] = {1,-1,0,0};
        for(int i=0; i<4; i++)
        {
            int nx = p.ff + dx[i];
            int ny = p.ss + dy[i];
            if(valid(nx,ny)&& !box[nx][ny]&&!visited[nx][ny])
            {
                visited[nx][ny] = 1;
                dis[nx][ny] = dis[p.ff][p.ss] + 1;
                q.push(mp(nx,ny));
            }
        }
    }

}
int main()
{
    int R,C;
    while(cin >> R >> C)
    {
        if(!R && !C)
        {
            break;
        }
        int n;
        cin >> n;
        memset(box,0,sizeof(box));
        memset(visited,0,sizeof(visited));
        memset(dis,0,sizeof(dis));
        for(int i=1; i<=n; i++)
        {
            int x,y;
            cin >> x >> y;
            for(int j=1; j<=y; j++)
            {
                int l;
                cin >> l;
                box[x][l] = 1;
            }
        }
        int r1,c1,R1,C1;
        cin >> r1 >> c1;
        cin >> R1 >> C1;

        gridbfs(r1,c1, R,C);
        cout << dis[R1][C1] << endl;
    }
    return 0;
}
