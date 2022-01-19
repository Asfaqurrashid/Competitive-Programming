#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll l,r;
        cin >> l >> r;
        if(2*l<=r)
        {
            cout << l << " " << 2*l << endl;
        }
        else
        {
            cout << -1 << " " << -1 << endl;
        }
    }
    return 0;
}
