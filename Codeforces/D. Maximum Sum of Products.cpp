#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0)
int main()
{
    fast;
    ll n;
    cin >> n;
    vector<ll> a(n),b(n), copy_a(n), copy_b(n);
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }

    for(int i=0; i<n; i++)
    {
        cin >> b[i];
    }
    ll ans = 0;
    for(int i=0; i<n; i++)
    {
        ans += a[i]*b[i];
    }
    ll maxx_odd = ans;
    ll maxx_even = ans;
    for(int i=0; i<n; i++)
    {
        ll l = i-1;
        ll r = i+1;
        ll sum = ans;
        while(l>=0 && r<n)
        {
            sum = sum - (a[l]*b[l] + a[r]*b[r]);
            sum = sum + (a[l]*b[r] + a[r]*b[l]);
            maxx_odd = max(maxx_odd, sum);
            l--;
            r++;
        }
    }
    for(int i=0; i<n; i++)
    {
        ll l = i-1;
        ll r = i;
        ll sum = ans;
        while(l>=0 && r<n)
        {
            sum = sum - (a[l]*b[l] + a[r]*b[r]);
            sum = sum + (a[l]*b[r] + a[r]*b[l]);
            maxx_even = max(maxx_even, sum);
            l--;
            r++;
        }
    }
    cout << max(maxx_even, maxx_odd) << endl;
    return 0;
}
