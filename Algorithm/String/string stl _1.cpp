#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<string> str;
    string s;
    getline(cin, s);
    str.push_back(s);
    for(int i=0; i<str.size(); i++)
    {
        cout << str[i] << " ";
    }
    cout << "\n";
    return 0;

}
