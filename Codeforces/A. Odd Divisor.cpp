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
        if(n%2!=0)
        {
            cout << "yes" << endl;

        }
        else
        {
            if(floor(log2(n))==ceil(log2(n)))
            {
                cout << "no" << endl;
            }
            else
            {
                cout << "yes" << endl;
            }
        }


    }
    return 0;
}
