#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define Fio() cin.tie(0); ios_base::sync_with_stdio(0)
typedef long long int ll;
int main()
{
    Fio();
    ll t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        string a,b;
        cin >> a >> b;
        ll len_a = a.length();
        ll len_b = b.length();
        ll f[n+1];
        memset(f,0,sizeof(f));
        if(a==b)
        {
            cout << "YES" << endl;
        }
        else
        {
            ll cnt_0 = 0;
            ll cnt_1 = 0;
            ll ck = 0;
            for(int i=0; i<len_a; i++)
            {
                if(a[i]=='0')
                {
                    cnt_0++;
                }
                if(a[i]=='1')
                {
                    cnt_1++;
                }
                if(cnt_0==cnt_1)
                {
                    f[i] = 1;
                    ck++;
                }
            }

            for(int i=0; i<len_a; i++)
            {

            }

        }
    }
    return 0;
}

