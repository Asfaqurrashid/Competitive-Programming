#include<bits/stdc++.h>
using namespace std;
#define pb push_back
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++) cin >> v[i];
    map<int,int>m;
    for(int i=0; i<n; i++) m[v[i]]++;
    map<int,int> :: iterator itr;
    int minn = 1e9;
    for(itr = m.begin(); itr != m.end(); ++itr)
    {
        minn = min(minn, itr->second);
    }
    if(m.size() != 3)
    {
        cout << 0 << endl;
        return 0;
    }
    vector<int>v1,v2,v3;
    for(int i=0; i<n; i++)
    {
        if(v[i]==1 && v1.size()<minn)
        {
            v1.pb(i+1);
        }
        if(v[i]==2 && v2.size()<minn)
        {
            v2.pb(i+1);
        }
        if(v[i]==3 && v3.size()<minn)
        {
            v3.pb(i+1);
        }
    }
    cout << minn << endl;
    for(int i=0; i<minn; i++)
    {
        cout << v1[i] << " " << v2[i] << " " << v3[i] << endl;
    }
    return 0;
}
