#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long int ll;
int main()
{
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    ll t;
    cin >> t;
    while(t--)
    {
        ll p,a,b,c;
        cin >> p >> a >> b >> c;
        ll res  = a - (p%a);
        if(p%a==0 || p%b==0 || p%c==0)
        {
            cout << 0 << endl;
            continue;
        }

         res = min(res,(b-(p%b)));
         res = min(res,(c-(p%c)));
        cout << res << endl;
    }
    return 0;
}
