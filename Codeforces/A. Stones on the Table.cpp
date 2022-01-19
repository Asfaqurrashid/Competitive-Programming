#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    char prev = s[0];
    int cnt = 0;
    for(int i=1; i<s.length(); i++)
    {
        if(prev == s[i])
        {
            cnt++;
        }
        else
        {
            prev = s[i];
        }
    }
    cout << cnt << endl;
    return 0;
}
