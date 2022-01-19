#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll n,m;
    cin >> n >> m;
    vector<ll> v(m);
    for(int i=0; i<m; i++) cin >> v[i];
    ll cnt = 0;
    ll prev = 1;
    for(int i=0; i<m; i++)
    {
        if(v[i]>=prev)
        {
            cnt += (v[i] - prev);
            prev = v[i];
        }
        else
        {
            cnt+= (n-prev)+v[i];
            prev = v[i];
        }

    }
    cout << cnt << endl;
    return 0;
}
