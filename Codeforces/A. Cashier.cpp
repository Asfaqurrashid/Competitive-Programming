#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
int main()
{
    int n,L,a;
    cin >> n >> L >> a;
    if(n==0)
    {
        cout << L/a << endl;
        return 0;
    }
    vector<int> t1,len;
    for(int i=1; i<=n; i++)
    {
        int t,l;
        cin >> t >> l;
        t1.pb(t);
        len.pb(l);
    }
    int ans = 0;
    ans += t1[0]/a;
    for(int i = 0; i<n-1; i++)
    {
        int gap = t1[i+1] - (t1[i]+len[i]);
        ans += gap/a;
    }
    ans += (L - (t1[n-1] + len[n-1]))/a;
    cout << ans << endl;
    return 0;
}
