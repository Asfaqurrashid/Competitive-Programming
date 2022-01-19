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
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
        }
        int cnt = 0;
        for(int i=1; i<n; i++)
        {
            if(a[0]==a[i])
            {
                cnt++;
            }
        }
        if(n==cnt-1)
        {
            cout << "YES" << endl;
            continue;
        }
        int minn = *min_element(a,a+n);
        for(int i=0; i<n; i++)
        {
           a[i] = a[i] - minn;
        }
        int ck = 0;
        for(int i=0; i<n; i++)
        {
            if(a[i]%2==0)
            {
                ck++;
            }
        }
        if(ck==n)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }


    }
    return 0;
}
