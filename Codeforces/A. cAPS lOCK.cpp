#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    if(islower(s[0]))
    {
        int ck = 0;
        for(int i=1; i<s.length(); i++)
        {
            if(isupper(s[i]))
            {
                ck++;
            }
        }
        if(ck==s.length()-1)
        {
            s[0] = toupper(s[0]);
            for(int i=1; i<s.length(); i++)
            {
                s[i] = tolower(s[i]);
            }
            cout << s << endl;
        }

        else
        {
            cout << s << endl;
        }
    }
    else if(isupper(s[0]))
    {
        int ck = 0;
        for(int i=1; i<s.length(); i++)
        {
            if(isupper(s[i]))
            {
                ck++;
            }
        }
        if(ck==s.length()-1)
        {
            for(int i=0; i<s.length(); i++)
            {
                s[i] = tolower(s[i]);
            }
            cout << s << endl;
        }
        else
        {
            cout << s << endl;
        }
    }

    return 0;
}
