#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
freopen("two2.in", "r", stdin);
    ll t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        if(n&1)
        {
            cout << -1 << endl;
        }
        else if(n==0)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << n/2 << endl;
        }

    }
    return 0;
}
