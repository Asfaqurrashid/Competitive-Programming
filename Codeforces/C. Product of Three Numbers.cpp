#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        ll r;
        ll k = n;
        ll ck = 0;
        set<ll> s;
        set<ll >::iterator itr;
        for(int i=2; i<=sqrt(n); i++)
        {

            if(n%i==0)
            {
                ck++;
                s.insert(i);

                n = n/i;
            }
            if(ck==2)
            {
                r = n;
                if(r>1)
                {
                    s.insert(r);
                }

                break;
            }
        }
        if(ck<2)
        {
            cout << "NO" << endl;
        }
        else
        {
            ll len = s.size();
            if(len==3)
            {
                cout << "YES" << endl;
                for(itr=s.begin(); itr!=s.end(); itr++)
                {
                    cout << *itr << " ";
                }
                cout << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }


    }
    return 0;
}
