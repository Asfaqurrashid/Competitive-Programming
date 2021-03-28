#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    ll n;
    cin >> n;
    ll a[6] = {100,20,10,5,1};
    ll cnt = 0;
        for(int i=0; i<5; i++)
        {
           while((ll)(n/a[i])>0)
           {
               cnt = cnt + (ll)(n/a[i]);
               n = n%a[i];


           }
        }
        cout << cnt << endl;

    return 0;
}
