#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t;
    cin >> n >> t;
    string s;
    cin >> s;
    char ch;
    while(t--)
    {
        for(int i=0; i<s.length()-1; i++)
        {
            if(s[i]=='B' && s[i+1]=='G')
            {
                ch = s[i+1];
                s[i+1] = s[i];
                s[i] = ch;
                i++;

            }

        }


    }
    cout << s << endl;
    return 0;
}
