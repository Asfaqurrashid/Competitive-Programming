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
        ll sum = 0;
        vector<ll> v(n);
        for(int i=0; i<n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        for(int i=0; i<n-1; i++)
        {
            sum += v[i];
        }
        double avg = (sum/(double)(n-1)) + v[n-1];
        cout << fixed << setprecision(10) << avg << endl;

    }
    return 0;
}
