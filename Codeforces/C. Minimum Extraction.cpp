#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        vector<int> v(n);
        for(int i=0; i<n; i++) cin >> v[i];
        sort(v.begin(), v.end());
        if(n==1)
        {
            cout << v[0] << endl;
        }
        else
        {
            int ans = v[0];
            for(int i=1; i<n; i++)
            {
                ans = max(ans,v[i]-v[i-1]);
            }
            cout << ans << endl;
        }
    }
    return 0;
}
