#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if(n>0)
    {
        cout << n << endl;
    }
    else
    {
        int ans = n;
        int last = n%10;
        n = n/10;
        int before_last = n%10;
        last = abs(last);
        before_last = abs(before_last);

        if(last>before_last)
        {
            ans = ans/10;
            cout << ans << endl;
        }
        else
        {

            ans = ans/100;
            ans = abs(ans);
            ans = ans*10 + last;
            ans = ans*(-1);
            cout << ans << endl;
        }
    }
    return 0;
}
