#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll n,k;
        cin >> n >> k;
        if(n<=k)
        {
            cout << 1 << endl;
            continue;
        }
        else
        {
            vector<pair<ll,ll> > v;
            for(int i=1; i<=sqrt(n); i++)
            {
                if(n%i==0)
                {
                    v.push_back(make_pair(i,n/i));
                    v.push_back(make_pair(n/i,i));
                }
            }
            sort(v.begin(), v.end());
            for(int i=0; i<v.size(); i++)
            {
                if(v[i].second <=k)
                {
                    cout << v[i].first << endl;
                    break;
                }
            }
        }

    }
    return 0;
}
