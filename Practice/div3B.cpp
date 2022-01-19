#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0)
ll str_int(string s)
{
    stringstream geek(s);
    ll x = 0;
    geek >> x;
    return x;
}
int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        ll digit = floor(log10(n)) + 1;
        if(digit==1)
        {
            cout << n << endl;
            continue;
        }
        string s;
        ll ans = (digit - 1)*9;
        ll temp = (ll)(n/(pow(10,digit-1)));
        ans += temp - 1;
        for(int i=0; i<digit; i++)
        {
            s.push_back('0'+temp);
        }
        ll x = str_int(s);
        if(n>=x)
        {
            ans+=1;
        }
        cout << ans << endl;
    }
    return 0;
}

