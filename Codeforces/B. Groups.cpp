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
        int a[n+1][6];
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<5; j++)
            {
                cin >> a[i][j];
            }
        }
        int v[n+1];
        memset(v,0,sizeof(v));
        int ck = 0;
        for(int i=0; i<5; i++)
        {
            int cnt = 0;
            for(int j=0; j<n; j++)
            {
                if(a[j][i]==1)
                {
                    cnt++;
                }
            }
            if(cnt >= n/2)
            {
                for(int k=0; k<n; k++)
                {
                    if(a[k][i]==1)
                    {
                        v[k] = a[k][i];
                    }

                }
                ck++;
            }

        }
        int count  = 0;
        for(int i=0; i<n; i++)
        {
            if(v[i]==1)
            {
                count++;
            }
        }
        if(count==n && ck>=2)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
