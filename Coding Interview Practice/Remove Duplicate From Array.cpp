#include<bits/stdc++.h>
using namespace std;
#define pb push_back
int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for(int i=0; i<n; i++)
    {
        int x;
        cin >> x;
        v.pb(x);
    }
    int prev = 0;
    for(int i=1; i<v.size(); i++)
    {
        if(v[i] == v[prev])
        {

        }
        else
        {
            prev = i;
        }
    }
    for(int i=0; i<v.size(); i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}

