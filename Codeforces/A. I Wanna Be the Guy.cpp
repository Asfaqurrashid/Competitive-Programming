#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int p,q;
    cin >> p;
    set<int> s;
    while(p--)
    {
        int x;
        cin >> x;
        s.insert(x);
    }
    cin >> q;
    while(q--)
    {
        int x;
        cin >> x;
        s.insert(x);
    }
    if(s.size()==n)
    {
        cout << "I become the guy." << endl;
    }
    else
    {
        cout << "Oh, my keyboard!" << endl;
    }
    return 0;
}
