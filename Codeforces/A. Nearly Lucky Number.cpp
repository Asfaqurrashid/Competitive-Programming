#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    string s;
    cin >> s;
    int cnt = 0;
    for(int i=0; i<s.length(); i++)
    {
        if(s[i]=='4' || s[i]=='7')
        {
            cnt++;
        }
    }
    string str;
    stringstream ss;
    ss << cnt;
    ss >> str;
    int ck = 0;
    for(int i=0; i<str.length(); i++)
    {
        if(str[i]!='4' && str[i]!='7')
        {
            ck  = 1;
        }
    }
    if(ck)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }

    return 0;
}
