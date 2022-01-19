#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ss second
#define ff first
#define pb push_back
#define mp make_pair
#define Fio() cin.tie(0); ios_base::sync_with_stdio(0)
int fx[] = {1,-1,0,0};
int fy[] = {0,0,1,-1};
int main()
{
    ll n;
    cin >> n;
    vector<ll> v(n+1);
    for(int i=0; i<n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    vector<ll> :: iterator lower, upper;
    lower = lower_bound(v.begin(), v.end(), 5);
    upper = upper_bound(v.begin(), v.end(), 5);
    cout << (lower - v.begin()) << " " << (upper - v.begin()) << endl;
    return 0;
}
