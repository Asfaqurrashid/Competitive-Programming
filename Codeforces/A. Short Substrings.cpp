#include<bits/stdc++.h>
using namespace std;
#define pb push_back
int main()
{
    int t;
    cin >> t;
    while(t--)
    {


    string a;
    cin >> a;
    if(a.length()==2)
    {
        cout << a << endl;
        continue;
    }
    string b;
    b.pb(a[0]);
    for(int i=1; i<a.length()-1; i+=2)
    {
        b.pb(a[i]);
    }
    b.pb(a[a.length()-1]);
    cout << b << endl;
    }
    return 0;
}
