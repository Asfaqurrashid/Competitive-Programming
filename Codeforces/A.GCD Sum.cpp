#include<bits/stdc++.h>
using namespace std;
#define ll unsigned long long int
ll sum(ll n)
{
    ll r = 0;
    while(n!=0)
    {
        r = r + n%10;
        n = n/10;
    }
    return r;
}
int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        while((__gcd(n,sum(n)))<=1)
        {
            n++;
        }
        cout << n << endl;
    }
    return 0;
}
