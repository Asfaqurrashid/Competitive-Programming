#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll x,n;
        cin >> x >> n;

         if(x%2==0)
        {
            ll ans = n/4;
            ans  = ans * 4;
            ll r = n%4;
            if(r==0)
            {
                cout << x << endl;
            }
            else if(r==1)
            {
                cout << x - (ans+1) << endl;
            }
            else if(r==2)
            {
                cout << x + 1 << endl;
            }
            else
            {
                cout << x + 1 + (ans+3) << endl;
            }
        }
        else
        {
            ll ans = n/4;
            ans  = ans * 4;
            ll r = n%4;
            if(r==0)
            {
                cout << x << endl;
            }
            else if(r==1)
            {
                cout << x + (ans+1) << endl;
            }
            else if(r==2)
            {
                cout << x - 1 << endl;
            }
            else
            {
                cout << (x - 1) - (ans+3) << endl;
            }
        }
    }
    return 0;
}
