#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin >> n >> m;
    vector<int> a(n);
    vector<pair<int,int> > v[n+1];
    bool visited[n+1];
    memset(visited, 0, sizeof(visited));
    for(int i=0; i<n; i++)
    1
        cin >> a[i];
    }
    for(int i=0; i<m; i++)
    {
        int x,y;
        cin >> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    vector<int> f(n+1,0);
    for(int i=1; i<=n; i++)
    {
        int sum = 0;
        for(int j=0; j<v[i].size(); j++)
        {
            sum += v[i][j];
        }
        f[i] = sum;

    }


    return 0;
}
