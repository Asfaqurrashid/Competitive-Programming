#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        ll k = 2;
        ll x = pow(2,k)-1;
        while(n%x!=0)
        {
            k++;
            x = pow(2,k) - 1;
        }
        cout << (ll)(n/(pow(2,k)-1)) << endl;
    }
    return 0;
}
