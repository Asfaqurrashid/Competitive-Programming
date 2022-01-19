#include<bits/stdc++.h>
using namespace std;
#define fast cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0)
int main()
{
    fast;
    int n,m;
    cin >> n >> m;
    int f[n+5];
    memset(f,0,sizeof(f));
    while(m--)
    {
        int x,y;
        cin >> x >> y;
        f[min(x,y)]++;
    }
    int ans = 0;
    for(int i=1; i<=n; i++)
    {
        if(f[i]==0)
        {
            ans++;
        }
    }
    int q;
    cin >> q;
    while(q--)
    {
        int t;
        cin >> t;
        if(t==1)
        {
            int x,y;
            cin >> x >> y;
            if(f[min(x,y)]==0)
            {
                ans--;

            }
            f[min(x,y)]++;
        }
        else if(t==2)
        {
            int x,y;
            cin >> x >> y;
            f[min(x,y)]--;
            if(f[min(x,y)]==0)
            {
                ans++;
            }
        }
        else
        {
            cout << ans << endl;
        }
    }

    return 0;
}
