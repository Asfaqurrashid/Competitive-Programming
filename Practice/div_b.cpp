#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0)
bool primecheck(ll n)
{
    if(n<=1) return 0;
    for(int i = 2; i*i <=n; i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    fast;
    ll t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        vector<ll> v(n);
        map<ll, vector<ll> > m;
        for(int i=0; i<n; i++)
        {
            cin >> v[i];
        }
        if(n%2==0)
        {
            ll l = 0;
            ll r = 1;
            cout << n/2 << endl;
            while(l<(n-1) && r<n)
            {
                if(v[l]>v[r])
                {
                    cout << l+1 << " " << r+1 << " " << 883 << " " << v[r] << endl;
                }
                else
                {
                    cout << l+1 << " " << r+1 << " " << v[l] << " " << 883 << endl;
                }

                l += 2;
                r += 2;
            }
        }
        else
        {
            ll l = 0;
            ll r = 1;
            cout << (n/2) + 1 << endl;
            while(l<(n-1) && r<n)
            {
                if(v[l]>v[r])
                {
                    cout << l+1 << " " << r+1 << " " << 883 << " " << v[r] << endl;
                }
                else
                {
                    cout << l+1 << " " << r+1 << " " << v[l] << " " << 883 << endl;
                }

                l += 2;
                r += 2;
            }
            if(v[n-1]>v[n-2])
            {
                cout << l+1 << " " << r+1 << " " << v[n-2] << " " << 887 << endl;
            }
            else
            {
                cout << l+1 << " " << r+1 << " " << 887 << " " << v[n-1] << endl;
            }
        }

    }
    return 0;
}
