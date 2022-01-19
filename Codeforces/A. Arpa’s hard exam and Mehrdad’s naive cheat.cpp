#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll n;
    cin >> n;
    if(n==0)
    {
        cout << 1 << endl;
        return 0;
    }
    ll r = n%4;
    if(r==1)
    {
        cout << 8 << endl;
    }
    else if(r==2)
    {
        cout << 4 << endl;
    }
    else if(r==3)
    {
        cout << 2 << endl;
    }
    else if(r==0)
    {
        cout << 6 << endl;
    }
    return 0;
}
