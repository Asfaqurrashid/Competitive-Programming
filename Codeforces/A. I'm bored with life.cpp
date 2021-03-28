#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll a,b;
    cin >> a >> b;
    ll sum = 1;
    for(int i=1; i<=min(a,b); i++)
    {
        sum=sum*i;
    }
    cout << sum << endl;
    return 0;
}
