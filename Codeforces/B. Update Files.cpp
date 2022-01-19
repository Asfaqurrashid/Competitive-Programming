#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll n,k;
        cin >> n >> k;
        ll computers = 1;
        ll remaining = n-1;
        ll step = 0;
        while(computers<k && remaining>=1)
        {
            remaining = remaining - computers;
            computers += computers;
            step++;
        }
        if(remaining<=0)
        {
            cout << step << endl;
        }
        else
        {
            if(remaining%k==0)
            {
                step += (remaining/k);
            }
            else
            {
                step += (remaining/k);
                step++;
            }
            cout << step << endl;
        }

    }
    return 0;
}
