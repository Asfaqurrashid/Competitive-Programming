#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string keyword;
        cin >> keyword;
        string s;
        cin >> s;
        int prev = 0;
        for(int i=0; i<keyword.length(); i++)
        {
            if(s[0]==keyword[i])
            {
                prev = i+1;
                break;
            }
        }
        int count = 0;
        for(int i=0; i<s.length(); i++)
        {

            for(int j=0; j<keyword.length(); j++)
            {
                if(s[i]==keyword[j])
                {
                    count += abs(prev - (j+1));
                    prev = j+1;
                    break;
                }
            }
        }
        cout << count << endl;
    }
    return 0;
}
