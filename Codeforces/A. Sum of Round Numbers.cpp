#include<bits/stdc++.h>
using namespace std;
#define pb push_back
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        vector<int>v;
        int cnt = 1;
        if(s.length()==1)
        {
            cout << cnt << endl;
            cout << (s[0] - '0')*pow(10,s.length()-1) << endl;
            continue;

        }


            int x = (s[0] - '0')*pow(10,s.length()-1);
            v.pb(x);
            for(int i=1; i<s.length(); i++)
            {
                if(s[i]!='0')
                {
                    int p = s.length() - 1;
                    int k = (s[i] - '0')*pow(10,(p-i));

                    v.pb(k);
                    cnt++;
                }
            }



        cout << cnt << endl;
        for(int i=0; i<v.size(); i++)
        {
            cout << v[i] << " ";
        }
        cout << endl;
        v.clear();
    }
    return 0;
}
