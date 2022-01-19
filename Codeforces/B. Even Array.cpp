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
        vector<int> v(n);
        for(int i=0; i<n; i++) cin >> v[i];
        int even = 0, odd = 0;
        for(int i=0; i<n; i++)
        {
            if(v[i]%2==0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }
        if(even>odd)
        {
            if(odd<floor(n*1.0/2*1.0))
            {
                cout << -1 << endl;
            }
            else
            {
                int cnt = 0;
                for(int i=1; i<n; i+=2)
                {
                    if(v[i]%2==0)
                    {
                        cnt++;
                    }
                }
                cout << cnt << endl;
            }
        }
        else if(odd>even)
        {
            if(even<ceil(n*1.0/2*1.0))
            {
                cout << -1 << endl;
            }
            else
            {
                int  cnt = 0;
                for(int i=0; i<n; i+=2)
                {
                    if(v[i]%2!=0)
                    {
                        cnt++;
                    }
                }
                cout << cnt << endl;
            }
        }
        else
        {
            int cnt = 0;
            for(int i =0; i<n; i+=2)
            {
                if(v[i]%2 !=0)
                {
                    cnt++;
                }
            }
            cout << cnt << endl;
        }
    }
    return 0;
}
