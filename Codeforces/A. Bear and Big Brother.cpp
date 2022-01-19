#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin >> a >> b;
    int cnt = 1;
    a = 3*a;
    b = 2*b;
    while(a<=b)
    {
        cnt++;
        a=a*3;
        b=b*2;

    }
    cout << cnt << endl;
    return 0;
}
