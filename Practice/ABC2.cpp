#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    freopen("max-pair.in", "r", stdin);
    ll t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        map<char, vector<int> > m;
        int len = s.length();
        for(int i=0; i<len; i++)
        {
            m[s[i]].push_back(i);

        }
        int ans = 0;
        map<char, vector<int> > :: iterator itr;
        for(itr = m.begin(); itr!=m.end(); ++itr)
        {
            int maxx = *max_element(m[itr->first].begin(), m[itr->first].end());
            int minn = *min_element(m[itr->first].begin(), m[itr->first].end());
            if(maxx == len-1)
            {
                ans = max(ans, maxx-1);
            }
            else if(maxx < len-1)
            {
                ans = max(ans, (len-1)-minn);
            }
        }

        cout << ans << endl;


    }
    return 0;
}
