#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll compute_hash(string const& s)
{
    const int p = 31;
    const int m = 1e9 + 9;
    ll hash_value = 0;
    ll p_pow = 1;
    for(int i=0; i<s.length(); i++)
    {
        hash_value = (hash_value + (s[i] - 'a' + 1)*p_pow) % m;
        p_pow = (p_pow * p)%m;
    }
    return hash_value;
}
int main()
{
    string s;
    cin >> s;
    ll hash_value = compute_hash(s);
    cout << hash_value << endl;
}
