#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,x;
        cin >> n >> x;
        vector<int> v(n);
        int total = 0;
        for(int i=0; i<n; i++)
        {
            cin >> v[i];
            total += v[i];
        }
        if(total == x)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
            int cnt = 0;
            for(int i=0; i<n; i++)
            {
                cnt += v[i];
                if(cnt == x)
                {
                    swap(v[i], v[i+1]);
                }
                cout << v[i] << " ";
            }
            cout << endl;
        }

    }
    return 0;
}
