#include<bits/stdc++.h>

using namespace std;
typedef long long int ll;
int main()
{
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    ll t;
    cin >> t;
    while(t--)
    {
        ll x,y;
        cin >> x >> y;
        if((x-y)>1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
