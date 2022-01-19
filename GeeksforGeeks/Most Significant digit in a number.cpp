#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    double k = log10(n);
    k = k - floor(k);
    int x  = pow(10,k);
    cout << x << endl;
    return 0;
}
