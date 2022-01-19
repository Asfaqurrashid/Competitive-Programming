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
        int limit = ceil((log2(n)))+2;
        vector<int> row(n+2, 0);
        vector<int> tmp(n+2), tmp2(n+2,0);
        vector<vector<int> > v(limit+2, row);
        for(int i=1; i<=n; i++)
        {
            cin >> v[1][i];

        }
        tmp = v[1];
        int ck = 1;

            while(ck<=limit-1)
            {
                for(int j = 1; j<=n; j++)
                {
                    tmp2[tmp[j]]++;
                }
                for(int j = 1; j<=n; j++)
                {
                    tmp[j] = tmp2[tmp[j]];

                }

                fill(tmp2.begin(), tmp2.end(), 0);
                v[ck+1] = tmp;
                ck++;

            }
        int q;
        cin >> q;
        while(q--)
        {
            int x,k;
            cin >> x >> k;
            if(k>limit-2)
            {
                cout << v[limit][x] << endl;
            }
            else
            {
                cout << v[k+1][x] << endl;
            }
        }


    }
    return 0;
}
