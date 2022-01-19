#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
int main()
{
    int q;
    cin >> q;
    while(q--)
    {
        int x,y,z;
        cin >> x >> y >> z;
        int l = abs(z-x);
        int r = abs(z-y);
        if(l==r)
        {
            cout << "Mouse C" << endl;
        }
        else if(l>r)
        {
            cout << "Cat B" << endl;
        }
        else
        {
            cout << "Cat A" << endl;
        }
    }
    return 0;
}
