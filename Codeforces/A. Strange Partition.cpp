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
        ll n,x;
        cin >> n >> x;
        ll a[n+5];
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
        }
        ll maxx = 0;
        ll sum = 0;
        for(int i=0; i<n; i++)
        {
            maxx += ceil((a[i]/(double)x));
            sum += a[i];
        }
        ll minimum = ceil((sum/(double)x));

        cout << minimum << " " << maxx << endl;
    }

    return 0;
}
