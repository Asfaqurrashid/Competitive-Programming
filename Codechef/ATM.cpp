#include<bits/stdc++.h>
using namespace std;
int main()
{
    double y;
    int x;
    cin >> x >> y;
    if(y>=(x*1.0+0.5) && x%30 == 0)
    {
        cout << fixed << setprecision(2) << y -(x+0.5) << endl;
    }
    else
    {
        cout << fixed << setprecision(2) << y << endl;
    }
    return 0;
}
