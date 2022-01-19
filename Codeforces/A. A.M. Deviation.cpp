#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        ll a,b,c;
        cin >> a >> b >> c;
        ll x = a+c;
        ll y =2*b;
        if(x==y)
        {
            cout << 0 << endl;
        }
        else
        {

            ll diff = abs(x-y);
            if(diff%3==0)
            {
                cout << 0 << endl;
            }
            else
            {
                cout << 1 << endl;
            }
        }
    }
    return 0;
}
