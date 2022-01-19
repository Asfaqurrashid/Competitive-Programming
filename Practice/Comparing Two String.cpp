#include<bits/stdc++.h>
using namespace std;
void relationalOperator(string s1, string s2)
{
    if(s1!=s2)
    {
        cout << s1 << " is not equal to " << s2 << endl;
    }
}
int main()
{
    string s1,s2;
    cin >> s1 >> s2;
    relationalOperator(s1,s2);

    return 0;
}
