#include<bits/stdc++.h>
using namespace std;
#define pb push_back
int main()
{
    int n;
    cin >> n;
    if(n==1)
    {
        cout << "I hate it" << endl;
        return 0;
    }
    string hate = "I hate it";
    string love = "I love it";
    for(int i=1; i<=n-1; i++)
    {
        if(i%2==0)
        {
            cout << "I love that ";
        }
        else
        {
            cout << "I hate that ";
        }
    }
    if(n%2==0)
    {
        cout << love << endl;
    }
    else
    {
        cout << hate << endl;
    }
    return 0;
}
