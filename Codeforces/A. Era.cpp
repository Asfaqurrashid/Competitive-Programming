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
        vector<ll> v(n+2),f(n+2,0);
        for(int i=1; i<=n; i++) cin >> v[i];
        for(int i=1; i<=n; i++)
        {
            f[i] = v[i] - i;

        }
        ll maxx = *max_element(f.begin(), f.end());
        cout << maxx << endl;
    }
    return 0;
}
