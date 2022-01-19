#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2;
    while(1)
    {
    cin >> s1 >> s2;
    int x = s1.compare(s2);
    if(!x)
    {
        cout << "equal" << endl;
    }
    else
    {
        cout << "not equal" << endl;
    }
    }
    return 0;
}
