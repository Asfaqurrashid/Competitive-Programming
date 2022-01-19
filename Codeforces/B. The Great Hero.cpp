#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ff first
#define ss second
#define mp make_pair
#define pb push_back
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        ll A,B,n;
        cin >> A >> B >> n;
        vector<ll>a(n), b(n);
        vector< pair<int, int> > v;
        for(int i=0; i<n; i++) cin >> a[i];
        for(int i=0; i<n; i++) cin >> b[i];
        for(int i=0; i<n; i++)
        {
            v.pb(mp(a[i],b[i]));
        }
        sort(v.begin(), v.end());
        for(int i=0; i<n; i++)
        {

             ll x = ceil(v[i].ss*1.0/A*1.0);
             ll y = ceil(B*1.0/v[i].ff*1.0);

             if(y>x)
             {
                 B = B - v[i].ff*ceil(v[i].ss*1.0/A*1.0);
                 if(i==n-1)
                 {
                     cout << "YES" << endl;
                     break;
                 }


             }
             else if(x>y)
             {
                 cout << "NO" << endl;
                 break;

             }
             else
             {
                 if(i==n-1)
                 {
                     cout << "YES" << endl;
                 }
                 else
                 {
                     cout << "NO" << endl;
                 }
                 break;

             }

        }

    }

    return 0;
}

