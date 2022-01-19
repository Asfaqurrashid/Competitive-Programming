#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,k;
        cin >> n >> k;
        vector<int> v;

        if(k==0)
        {
            for(int i=1; i<=n; i++)
            {
                cout << i << " ";
            }
            continue;
        }

        int temp = n;
        if(n%2==0)
        {
            if(((n/2)-1)<k)
            {
                cout << -1 << endl;
                continue;
            }
        }

        if(n>=3 && (int)(n/2)>=k)
        {
            for(int i=1; i<=k; i++)
            {
                v.push_back(temp--);
            }
            sort(v.begin(), v.end());

            int check = 1;
            for(int i=1; i<=n-k; i++)
            {
                cout << i << " ";
                if(check<=v.size())
                {
                    cout << v[i-1] << " ";
                    check++;

                }

            }
        }

        else
        {
            cout << -1 << endl;
        }
    }
    return 0;
}
