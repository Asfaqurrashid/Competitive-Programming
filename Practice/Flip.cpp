#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll n;
        ll bin;
        cin >> n;
        vector<int>v;
        v.clear();
    while (n > 0)
    {
        bin = n % 2;
        v.push_back(bin);
        n /= 2;
    }

    cout << endl;
    ll pos = 0;
    for(int i=0; i<=v.size(); i++)
    {
        if(v[i]==1)
        {
            pos = i;
            break;
        }
    }
    cout <<  pos+1 << endl;

    }
}
