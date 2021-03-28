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
        ll a,b;
        cin >> a >> b;
        ll p = a;
        ll q = b;
        if(a<b)
        {
            cout << 1 << endl;
            continue;
        }
        if(a==b)
        {
            cout << 2 << endl;
            continue;
        }

        ll cnt = 0;

        if(b==1)
        {
            b+=2;
            cnt+=2;
        }

        if(b==2)
        {
            b++;
            cnt++;
        }


        while(a>0)
        {
            a = a/b;
            cnt++;
        }
        if(p%2==0 && q%2==0)
        {
            if(q!=2)
            {
                cnt--;

            }
        }
        cout << cnt << endl;
    }
    return 0;
}
