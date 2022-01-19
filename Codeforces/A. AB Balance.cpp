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
        int ab = 0;
        int ba = 0;
        int n = s.size();
        for(int i=0; i<n-1; i++)
        {
            if(s[i] == 'a' && s[i+1] == 'b') ab++;
            if(s[i]=='b' && s[i+1]=='a') ba++;
        }
        if(ab!=ba)
        {
            if(s[n-1]=='a') s[n-1] = 'b';
            else s[n-1] = 'a';
        }
        cout << s << endl;
    }
    return 0;
}
