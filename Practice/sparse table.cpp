#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
int main()
{
    int n,q;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++)
    {
        cin >> v[i];
    }
    int maxx = log2(n);
    int m[n+1][maxx+1];
    memset(m,0,sizeof(m));
    for(int i=0; i<n; i++)
    {
        m[i][0] = v[i];
    }
    for(int j = 1; j<=maxx; j++)
    {
        for(int i = 0;(i+(1<<j)-1)<n; i++)
        {
            m[i][j] = min(m[i][j-1], m[i+(1<<(j-1))][j-1]);
        }
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<=maxx; j++)
        {
            cout << m[i][j] << " ";
        }
        cout << endl;
    }
    cin >> q;
    while(q--)
    {
        int x,y;
        cin >> x >> y;
        int len = y - x + 1;
        int k = log2(len);
        cout << min(m[x][k], m[y-(1<<k)+1][k]) << endl;
    }
    return 0;
}
