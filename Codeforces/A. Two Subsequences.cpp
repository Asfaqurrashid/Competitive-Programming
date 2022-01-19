#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        string t = "abcdefghijklmnopqrstuvwxyz";
        char ch;
        bool check = 0;
        for(int i=0; i<t.size(); i++)
        {
            for(int j=0; j<s.size(); j++)
            {
                if(s[j]== t[i])
                {
                    ch = s[j];
                    check = 1;
                    break;
                }
            }
            if(check)
            {
                break;
            }
        }
        cout << ch << " ";
        bool ck = 1;
        for(int i=0; i<s.size(); i++)
        {
            if(ck && s[i]==ch)
            {
                ck = 0;
                continue;
            }
            cout << s[i];
        }
        cout << endl;

    }
    return 0;
}
