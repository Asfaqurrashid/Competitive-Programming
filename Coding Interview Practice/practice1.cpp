#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ss second
#define ff first
#define mp make_pair
#define pb push_back
#define endl "\n"
#define fast cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0)
template <typename T>
T myMax(T x, T y)
{
    return (x > y)? x : y;
}
void print(vector<ll> v)
{
    for(int i=0; i<v.size(); i++)
    {
        cout << v[i] << " ";
    }
}
int main()
{
    ll n;
    cin >> n;
    vector<ll>v(n), s(n);
    for(int i=0; i<n; i++) cin >> v[i];

    return 0;
}
