#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll r,g,b;
        cin >> r >> g >> b;
        ll maxx = max(r,g);
        maxx = max(maxx, b);
        ll minn = min(r,g);
        minn = min(minn, b);
        ll cnt = minn;
        ll secmax = 0;
        if(maxx==r)
        {
            secmaxx = max(g,b);
        }
        else if(maxx==g)
        {
            secmaxx = max(r,b);
        }
        else
        {
            secmaxx = max(r,g);
        }
        cnt += min(maxx-minn, secmaxx);
        cout << cnt << endl;
    }
    return 0;
}
