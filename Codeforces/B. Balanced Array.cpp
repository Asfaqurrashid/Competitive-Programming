#include<bits/stdc++.h>
using namespace std;
#define pb push_back
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> v;
        int x = n/2;
        if(x%2==0)
        {
            cout << "YES" << endl;
            for(int i=1; i<=x; i++)
            {
                v.pb(i*2);
            }
            int cnt = 0;
            int sum = accumulate(v.begin(), v.end(),0);
            for(int i=1; i<x; i++)
            {
                v.pb((i*2)-1);
                cnt += i*2-1;
            }
            v.pb(sum-cnt);
            for(int i=0; i<v.size(); i++)
            {
                cout << v[i] << " ";
            }
            cout << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
