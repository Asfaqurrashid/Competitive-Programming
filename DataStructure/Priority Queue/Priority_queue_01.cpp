#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    map<int, priority_queue<int> > m;
    ll n;
    cin >> n;
    vector<ll> u(n),s(n);
    for(int i=0; i<n; i++)
    {
        ll x;
        cin >> x;
        u.push_back(x);
    }
    for(int i=0; i<n; i++)
    {
        ll x;
        cin >> x;
        s.push_back(x);
    }
    for(int i=0; i<n; i++)
    {
        m[u[i]].push(s[i]);
    }
    map<int, priority_queue<int> > :: iterator itr;
    for(itr = m.begin(); itr != m.end(); ++itr)
    {
        cout << itr->first << " -> ";
        while(!(int)m[itr->first].empty())
        {
            int u = (int)m[itr->first].top();
            cout << u << endl;
            m[itr->first].pop();
        }
        cout << endl;
    }


    return 0;
}
