#include<bits/stdc++.h>
using namespace std;
#define pb push_back
int main()
{
    int n;
    cin >> n;
    map<string,int>m;
    while(n--)
    {
        string s;
        cin >> s;
        if(m.find(s)!=m.end())
        {
            cout << s << m[s] << endl;
            m[s]++;
            string x = to_string(m[s]);
            m[s+x]++;
        }
        else
        {
            cout << "OK" << endl;
            m[s]++;
        }

    }
    return 0;
}
