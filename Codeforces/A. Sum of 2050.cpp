#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        if(n<2050)
        {
            cout << -1 << endl;
        }
        else
        {
            ll digit = floor(log10(n)) + 1;
            string v;
            v.push_back('2');
            v.push_back('0');
            v.push_back('5');
            v.push_back('0');
            for(int i=0; i<(digit-4); i++)
            {
                v.push_back('0');
            }
            stringstream geek(v);
            ll x = 0;
            geek >> x;
            ll cnt = 0;
            bool flag = false;
            while(n%x!=0)
            {
                 cnt = cnt + (ll)(n/x);
                n = n-(x*(ll)(n/x));


                    x = x/10;
                if((floor(log10(x)+1)<4))
                   {
                       flag = true;
                       break;
                   }
            }
            cnt = cnt + (ll)(n/x);
            if(flag)
            {
                cout << -1 << endl;
            }
            else
            {
                cout << cnt << endl;
            }

        }
    }
    return 0;
}
