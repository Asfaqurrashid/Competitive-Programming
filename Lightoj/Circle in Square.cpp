#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for(int i=1; i<=t; i++)
    {
        double r;
        cin >> r;
        double pi = 2*acos(0.0);
        double ans = (4-pi)*(r*r);
        cout << fixed << setprecision(2) <<"Case "<< i << ": " <<  ans << endl;
    }

    return 0;
}
