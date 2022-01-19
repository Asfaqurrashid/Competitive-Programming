#include<bits/stdc++.h>
using namespace std;
void make_set(int u, int parent[])
{
    parent[u] = u;
}
int find_representative(int u, int parent[])
{
    if(parent[u]==u)
    {
        return u;
    }
    return parent[u] = find_representative(parent[u], parent);
}
void Union(int a, int b, int parent[])
{
    int u = find_representative(a, parent);
    int v = find_representative(b, parent);
    parent[v] = u;
}
int main()
{
    int n, q;
    cin >> n >> q;
    int parent[n+1];
    for(int i=1; i<=n; i++)
    {
        make_set(i,parent);
    }
    for(int i=1; i<=q; i++)
    {
        int x,y;
        cin >> x >> y; // 1 <= x,y <= n
        Union(x,y,parent);
    }
    for(int i=1; i<=n; i++)
    {
        cout << parent[i] << " ";
    }
    cout << endl;
    return 0;
}
