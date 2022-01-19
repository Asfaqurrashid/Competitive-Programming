#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long int ll;
int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll a,b;
        cin >> a >> b;
        if(a==b)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
            cout << a*a*b << " " << a << " " << 2*a << endl;
        }
    }
    return 0;
}
