#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        bool flag = 0;
        float p = n/4.0;
        float q = n/2.0;
        if(ceil(p)==floor(p))
        {
           if(sqrt(p)*sqrt(p)==p)
           {
               flag = 1;
           }
           else
           {
               flag = 0;
           }
        }
         if(ceil(q)==floor(q))
        {
            if(sqrt(q)*sqrt(q)==q)
            {
                flag = 1;
            }
            else
            {
                flag = 0;
            }

        }
        if(!flag)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }


    }
    return 0;
}
