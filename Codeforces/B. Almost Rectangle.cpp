#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        char a[n+1][n+1];
        vector<pair<int,int> > v;
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=n; j++)
            {
                cin >> a[i][j];
                if(a[i][j]=='*')
                {
                    v.push_back(make_pair(i,j));
                }
            }
        }

        if(v[0].second == v[1].second)
        {
            if(v[0].second == n)
            {
                a[v[0].first][1] = '*';
                a[v[1].first][1] = '*';

            }
            else
            {
                a[v[0].first][n] = '*';
                a[v[1].first][n] = '*';
            }
        }
        else if(v[0].first == v[1].first)
        {
            if(v[0].first == n)
            {
                a[1][v[0].second] = '*';
                a[1][v[1].second] = '*';

            }
            else
            {
                a[n][v[0].second] = '*';
                a[n][v[1].second] = '*';
            }
        }
        else
        {
             a[v[0].first][v[1].second] = '*';
             a[v[1].first][v[0].second] = '*';
        }

        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=n; j++)
            {
                cout << a[i][j] << " ";
            }
            cout << endl;
        }

    }
    return 0;
}
