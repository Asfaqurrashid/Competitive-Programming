#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int k;
        cin >> k;
        if(k>12)
        {
            cout << 0 << endl;
        }
        else
        {
            int cnt = 0;
            for(int i=1; i<=6; i++)
            {
                for(int j=i; j<=6; j++)
                {
                    if(i+j==k)
                    {
                        cnt++;
                    }
                }
            }
            cout << cnt << endl;
        }
    }
    return 0;
}
