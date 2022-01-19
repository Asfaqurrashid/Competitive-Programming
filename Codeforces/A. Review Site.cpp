#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int a[n+5];
        int one = 0;
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
            if(a[i]==1)
            {
                one++;

            }
            if(a[i]==3)
            {
                one++;
            }
        }
        cout << one << endl;

    }
    return 0;
}
