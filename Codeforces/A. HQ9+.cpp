#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    string str = "HQ9";
    cin >> s;
    bool ck = 0;
    for(int i=0; i<s.length(); i++)
    {
        for(int j=0; j<str.length(); j++)
        {
            if(s[i]==str[j])
            {
                ck = 1;
                break;
            }
        }
    }
    if(ck)
    {
        cout <<"YES" << endl;    }
        else
        {
            cout <<"NO" << endl;
        }
    return 0;
}
