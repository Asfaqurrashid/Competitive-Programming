#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2;
    cin >> s1 >> s2;
    int x = s1.compare(s2);
    if(!x)
    {
        cout << s1 << endl;
    }
    else
    {
        cout << 1 << endl;
    }
    return 0;
}
