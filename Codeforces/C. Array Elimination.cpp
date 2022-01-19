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
        vector<int> v(n);
        int a[30];
        memset(a,0,sizeof(a));
        for(int i=0; i<n; i++)
        {
            cin >> v[i];
        }
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<30; j++)
            {
                if((v[i] >> j)&1)
                {
                    a[j]++;
                }
            }
        }

        for(int k = 1; k<=n; k++)
        {
            int ck = 1;
            for(int i=0; i<30; i++)
            {
                if(a[i]%k!=0)
                {
                    ck = 0;
                    break;
                }
            }
            if(ck)
            {
                cout << k << " ";
            }
        }
        cout << endl;

    }
    return 0;
}
