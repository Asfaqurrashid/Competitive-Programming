#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
void solve()
{
    ll n;
    cin >> n;
    ll a[n+5];
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    ll even = 0;
    ll odd = 0;
    for(int i=0; i<n; i++)
    {
        if(a[i]%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    if(even>=odd)
    {
        for(int i=0; i<n; i++)
        {
            if(a[i]%2==0)
            {
                cout << a[i] << " ";
            }
        }
        for(int i=0; i<n; i++)
        {
            if(a[i]%2!=0)
            {
                cout << a[i]  << " ";
            }
        }
        cout << endl;
    }
    else
    {

        for(int i=0; i<n; i++)
        {
            if(a[i]%2!=0)
            {
                cout << a[i] << " ";
            }
        }
        for(int i=0; i<n; i++)
        {
            if(a[i]%2==0)
            {
                cout << a[i]  << " ";
            }
        }
        cout << endl;
    }
}
int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        solve();
    }
}
