#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll n,x;
    cin >> n >> x;
    if(x==1)
    {
        cout << 1 << endl;
        return 0;
    }
    ll cnt = 0;
    for(int i=1; i<=sqrt(x); i++)
    {
        if(x%i==0)
        {
            if(i>n || (x/i)>n)
            {
                continue;
            }
            else if(i==(x/i))
            {
                cnt++;
            }
            else
            {
                cnt+=2;
            }
        }
    }
    cout << cnt << endl;
    return 0;
}
