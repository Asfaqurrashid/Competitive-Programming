#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[10][10];
    int p,q;
    for(int i=1; i<=5; i++)
    {
        for(int j=1; j<=5; j++)
        {
            cin >> a[i][j];
        }
    }
     for(int i=1; i<=5; i++)
    {
        for(int j=1; j<=5; j++)
        {
            if(a[i][j]==1)
            {
                p = i;
                q = j;
                break;
            }
        }
    }
    int sum = abs(3-p) + abs(3-q);
    cout << sum << endl;


    return 0;
}