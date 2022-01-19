#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll t;
    cin >> t;
    for(int k=1;k<=t; k++)
    {
        ll s;
        cin >> s;
        ll integer = 0;

        double range = sqrt(s);
        if(floor(range)==ceil(range))
        {
             integer = range;

        }
        else
        {
             integer = (ll)range + 1;

        }
        ll i = integer;
        ll j = integer;
       ll center = integer*integer - (integer-1);
       if(center == s)
       {
           cout << "Case " << k << ": " << i << " " << j << endl;
           continue;
       }
       if(integer%2==0)
       {
           if(center<s)
           {
               i = integer;
               j = j - (s - center);
           }
           else
           {
               j = integer;
               i = i - (center - s);
           }

       }
       else
       {
           if(center<s)
           {
               j = integer;
               i = i - (s - center);
           }
           else
           {
               j = j - (center - s);
               i = integer;
           }
       }
       cout << "Case " << k << ": " << i << " " << j << endl;

    }
    return 0;
}
