#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
    ll x,y,n;
    cin >> x >> y >> n;
    int k = floor(n*1.0/x*1.0);
    if(k*x+y<=n)
    {
        cout << k*x+y << endl;
    }
    else
    {
        cout << (k-1)*x + y << endl;
    }
    }
    return 0;
}
