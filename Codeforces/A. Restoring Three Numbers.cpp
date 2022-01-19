#include<bits/stdc++.h>
using namespace std;
#define pb push_back
int main()
{
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    vector<int>v;
    v.pb(a);
    v.pb(b);
    v.pb(c);
    v.pb(d);
    int maxx = *max_element(v.begin(),v.end());
    for(int i=0; i<v.size(); i++)
    {
        if(v[i]!=maxx)
        {
            cout << maxx - v[i] << " ";
        }
    }
    return 0;
}

