#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll t;
    cin >> t;
    for(int i=1; i<=t; i++)
    {
        ll w;
        cin >> w;
        if(w%2==0)
        {
            ll c = 0;
            while(w%2==0)
            {
                c++;
                w = w/2;
            }
            cout << "Case " << i << ": " << w << " " << pow(2,c) << endl;
        }
        else
        {
            cout << "Case " << i << ": " << "Impossible" << endl;
        }
    }
    return 0;
}
