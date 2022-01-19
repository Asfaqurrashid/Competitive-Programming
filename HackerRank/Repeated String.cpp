#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    string s;
    ll n;
    cin >> s;
    cin >> n;
    ll cnt = 0;
    for(int i=0; i<s.length(); i++)
    {
        if(s[i]=='a')
        {
            cnt++;
        }
    }

    return 0;
}
