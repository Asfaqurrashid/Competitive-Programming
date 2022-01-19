#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int m = n;
    int cnt = n+1;
    int ck = n-1;
    for(int row = 1; row<=n; row++)
    {
        for(int space = 1; space<=row; space++)
        {
            cout << " ";
        }

        for(int p=1; p<=(cnt-row); p++)
        {
            cout << p+ck << " ";

        }
        ck--;

        cout << endl;
    }
    return 0;
}

