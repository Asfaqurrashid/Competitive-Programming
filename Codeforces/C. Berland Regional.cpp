#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0)
int main()
{
    fast;
    ll t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        vector<ll> u,s;
        set<ll>st;
        for(int i=0; i<n; i++)
        {
            ll x;
            cin >> x;
            u.push_back(x);
            st.insert(x);
        }
        for(int i=0; i<n; i++)
        {
            ll x;
            cin >> x;
            s.push_back(x);
        }
        map<ll, vector<ll> > m;
        for(int i=0; i<n; i++)
        {
            m[u[i]].push_back(s[i]);
        }
        ll len = st.size();
        map<ll, vector<ll> > :: iterator itr;
        for(itr = m.begin(); itr != m.end(); ++itr)
        {
            sort(m[itr->first].begin(), m[itr->first].end(), greater<ll>());
        }
        for(itr = m.begin(); itr != m.end(); ++itr)
        {
            for(int j=1; j<m[itr->first].size(); j++)
            {
                m[itr->first][j] = m[itr->first][j-1] + m[itr->first][j];
            }
        }
        ll ans = 0;
        for(itr = m.begin(); itr != m.end(); ++itr)
        {
            sort(m[itr->first].begin(), m[itr->first].end(), greater<ll>());
            ans = max(ans, (ll)m[itr->first].size());
        }
        map<ll, vector<ll> > mp;
        for(itr = m.begin(); itr != m.end(); ++itr)
        {
           for(int k = 1; k<=n; k++)
           {
               if(k>(ll)m[itr->first].size())
               {
                   break;
               }
               else
               {
                   ll v = (ll)m[itr->first].size() % k;
                   mp[k].push_back((ll)m[itr->first][v]);
               }
           }
        }
        vector<ll> v;
        for(itr = mp.begin(); itr != mp.end(); ++itr)
        {
            ll cnt = 0;
            for(int j=0; j<mp[itr->first].size(); j++)
            {
                 cnt += mp[itr->first][j];
            }
            v.push_back(cnt);

        }
        for(int i=0; i<v.size(); i++)
        {
            cout << v[i] << " ";
        }
        for(int i=0; i<(n-v.size()); i++)
        {
            cout << 0 << " ";
        }
        cout << endl;
    }
    return 0;
}
