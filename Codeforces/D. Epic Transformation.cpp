#include<bits/stdc++.h>
using namespace std;
#define mp make_pair
#define ff first
#define ss second
#define ll long long int
int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
       ll n;
       cin >> n;
       map<ll,ll> m;
       priority_queue<pair<ll,ll> >q;
       pair<ll,ll> p1,p2;

       for(int i=0; i<n; i++)
       {
           ll x;
           cin >> x;
           m[x]++;
       }
       map<ll,ll> :: iterator itr;
       for(itr = m.begin(); itr!=m.end(); ++itr)
       {
           q.push(mp(itr->second, itr->first));
       }
       ll sz = n;
       while(q.size()>=2)
       {
           p1 = q.top();
           q.pop();
           p2 = q.top();
           q.pop();
           p1.ff--;
           p2.ff--;
           sz-=2;
           if(p1.ff>0)
           {
               q.push(mp(p1.ff,p1.ss));
           }
           if(p2.ff>0)
           {
               q.push(mp(p2.ff,p2.ss));
           }

       }
       cout << sz << endl;


    }

    return 0;
}

