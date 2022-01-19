#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for(int i=1; i<=t; i++)
    {
        int n,m;
        cin >> n >> m;
        if(m==1 || n==1)
        {
            cout << "Case " << i << ": " << max(m,n) << endl;
            continue;
        }
        if(m==2 || n==2)
        {

            cout<<"Case "<<i<<": "<<((m*n)/8)*4 + (((m*n)%8)>=4?4:(m*n)%8)<<endl;

        }
        else
        {
            int ans = ceil((m*n)/2.0);

            cout << "Case " << i << ": " << ans << endl;
        }
    }
    return 0;
}
