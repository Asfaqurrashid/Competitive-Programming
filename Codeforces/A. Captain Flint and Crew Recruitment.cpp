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
        if(n<31)
        {
            cout << "NO" << endl;

        }
        else
        {
            cout << "YES" << endl;
            if(n==36 || n==40 || n==44)
            {
                cout << 6 << " " << 10 << " " << 15 << " " <<  n-31 << endl;
            }
            else
            {
                cout << 6 << " " << 10 << " " << 14 << " " << n-30 << endl;
            }


        }
    }
    return 0;
}
