#include<bits/stdc++.h>
using namespace std;
#define pb push_back
int main()
{
    int a,b,c;
    vector<int> v;
    cin >> a >> b >> c;
    v.pb(a);
    v.pb(b);
    v.pb(c);
    sort(v.begin(), v.end());
    int sum = 0;
    for(int i=v.size()-1; i>=1; i--)
    {
        sum += v[i] - v[i-1];
    }
    cout << sum << endl;
    return 0;
}
