#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int x1,p1,x2,p2;
        cin >> x1 >> p1;
        cin >> x2 >> p2;
        string s1 = to_string(x1);
        string s2 = to_string(x2);
        int ck1 = 0;
        int ck2 = 0;
        string s;
        if(s1.size()>s2.size())
        {
            ck1 += p1;
            ck1 += s2.size();
            ck2 += p2;
            ck2 += s1.size();

            int r = s1.size()-1;

            for(int i = s1.size()-1; i>=0; i--)
            {
                if(s1[i] != '0')
                {
                    r = i;
                    break;
                }
            }

            for(int i = 0; i<=r; i++)
            {
                s.pb(s1[i]);
            }
        }
        else if(s1.size() < s2.size())
        {
            int l = 0, r = s2.size()-1;
        }
        else
        {
            int l = 0, r = s1.size()-1;
        }
    }
    return 0;
}
