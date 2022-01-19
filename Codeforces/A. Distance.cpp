#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int x,y;
        cin >> x >> y;
        if((x+y)%2 != 0)
        {
            cout << -1 << " " << -1 << endl;
        }
        else
        {
            int a,b;
            int ck = 0;
            int distance = (x + y) / 2;
            for(int i=0; i<=distance; i++)
            {
                for(int j=0; j<=distance; j++)
                {
                    if(abs(i-x)+abs(j-y) == distance)
                    {
                        ck = 1;
                        a = i;
                        b = j;
                        break;
                    }
                }
                if(ck)
                {
                    break;
                }
            }
            cout << a << " " << b << endl;
        }
    }
    return 0;
}
