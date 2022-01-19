#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

vector<ll> v;


ll comma(ll p)
{
    if(p==4)
    {
        return 1;
    }
    else if(p==5 || p == 6 || p==7)
    {
        return 2;
    }
    else if(p==8 || p==9 || p==10)
    {
        return 3;
    }
    else if(p==11 || p==12 || p==13)
    {
        return 4;
    }
    else if(p==14 || p==15 || p==16)
    {
        return 5;
    }

}
ll recursion(ll n)
{
    ll sum = 0;

    for(int i=4; i<n; i++)
    {

        ll number = 9;
        for(int j=0; j<(i-1); j++)
        {
            number = number*10;
            number = number + 9;
        }
        ll number_1 = 1;
        for(int j=0; j<(i-1); j++)
        {
            number_1 = number_1*10;

        }
        sum = sum +  (ll)(comma(i)*(ll)((number - number_1) + 1));

    }
    return sum;
}

int main()
{
    for (int m=0; m < 14; m++)
{
    v.push_back(9);
}
    ll n;
    cin >> n;
    ll k = ceil(log10(n+1));
    if(k<4)
    {
        cout << 0 << endl;
        return 0;
    }
    ll total = recursion(k);
    ll number_1 = 1;
    for(int i=0; i<(k-1); i++)
        {
            number_1 = number_1*10;

        }
    ll extra_number = (n - number_1 + 1);
    ll x = extra_number*comma(k);

    total = total + x;
    cout << total << endl;
    return 0;
}
