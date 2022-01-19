#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
    int n;
    cin >> n;
    string s;
    string a,b;
    cin >> s;
    int len = n;
    int cnt = 0;
    for(int i=0; i<len; i++)
    {
        if(s[i]=='1')
        {
            cnt++;
        }
    }
    if(cnt%2==1 || s[0] == '0' || s[n-1] == '0')
    {
        cout << "NO" << endl;
        continue;
    }
    int k = 0;
    bool f = false;
    for(int i=0; i<len; i++)
    {
        if(s[i]=='1')
        {
            a.push_back(2*k<cnt? '(':')');
            b.push_back(2*k<cnt? '(':')');
            k++;
        }
        else
        {
            a.push_back(f? '(':')');
            b.push_back(f? ')':'(');
             f = !f;
        }

    }

    cout << "YES" << endl << a << endl << b << endl;

    }
    return 0;
}
