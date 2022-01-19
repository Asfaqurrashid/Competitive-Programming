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
        vector<int>v(n);
        for(int i=0; i<n; i++) cin >> v[i];
        if(n%2==0)
        {
            cout << "YES" << endl;
        }
        else
        {
            int ck = 0;
            for(int i=0; i<n-1; i++)
            {
                if(v[i]>=v[i+1])
                {
                    ck = 1;
                    break;
                }
            }
            if(ck)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}
