#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll n,k;
        cin >> n >> k;
        string s;
        cin >> s;
        ll len = s.length(); // 7


        ll l,r;
        for(int i=0; i<len; i++)
        {
            if(s[i]=='*')
            {

                l = i; // l  = 1
                break;
            }
        }
        for(int i=len-1; i>=0; i--)
        {
            if(s[i]=='*')
            {
                r = i; // r = 6
                break;
            }
        }

        ll cnt = 1;
        ll p = l;  // p = 1
        ll j;
        while(1)
        {

             j = min(n-1,p+k);


            for ( ; p<j ; )
            {
                if(s[j]=='*')
                {
                    cnt++;

                    break;
                }
                else
                {
                    j--;
                }

            }
            p = j;

            if(p==r)
            {
                break;
            }


        }
        cout << cnt << endl;




    }
    return 0;
}
