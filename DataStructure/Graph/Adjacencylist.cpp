#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v[1001];
    int V,E;
    cin >> V >> E;
    for(int i=1; i<=E; i++)
    {
        int x,y;
        cin >> x >> y;
        v[x].push_back(y);
        if(x!=y)
        {
              v[y].push_back(x);
        }

    }

    for(int i=1; i<=V; i++)
    {
        cout << i << " ";
        for(int j=0; j<v[i].size(); j++)
        {
            cout << " -> " << v[i][j] ;
        }
        cout << endl;
    }

    return 0;
}
