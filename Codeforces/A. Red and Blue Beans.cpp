#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll r,b,d;
        cin >> r >> b >> d;
        if(abs(r-b)<=d)
        {
            cout << "YES" << endl;
        }
        else
        {
            if(((d+1)*min(r,b))>=max(r,b))
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}
