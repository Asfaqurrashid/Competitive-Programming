#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll n,m,x,a;
        cin >> n >> m >> x;
        x--;
         ll col = x/n;
         ll row = x%n;
         ll ans = row*m + col + 1 ;
        cout << ans << endl;
    }

    return 0;
}
