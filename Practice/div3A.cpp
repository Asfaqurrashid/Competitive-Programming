#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0)
int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        string s;
        cin >> s;
        char prev = s[0];
        vector<char> v;
        v.push_back(s[0]);
        bool flag = 0;
        for(int i=1; i<s.length(); i++)
        {
            if(s[i]!= prev)
            {
                for(int j=0; j<v.size(); j++)
                {
                    if(s[i]==v[j])
                    {
                        flag = 1;
                        break;
                    }

                }

                prev = s[i];
            }


                v.push_back(s[i]);

        }
        if(flag)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}
