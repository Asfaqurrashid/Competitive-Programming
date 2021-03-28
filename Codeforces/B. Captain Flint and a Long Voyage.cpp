#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    ll t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;

            ll x = (n+3)/4;
            for(int i=1; i<=(n-x); i++)
            {
                cout << 9;
            }
            for(int i=1; i<=x; i++)
            {
                cout << 8;
            }
            cout << "\n";


    }
    return 0;
}
