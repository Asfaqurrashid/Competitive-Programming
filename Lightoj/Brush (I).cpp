#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for(int k=1; k<=t; k++)
    {
        int n;
        cin >> n;
        int a[n+5];
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
        }
        int sum = 0;
        for(int i=0; i<n; i++)
        {
            if(a[i]>0)
            {
                 sum+=a[i];
            }

        }
         cout << "Case " << k << ": " << sum << endl;
    }
    return 0;
}
