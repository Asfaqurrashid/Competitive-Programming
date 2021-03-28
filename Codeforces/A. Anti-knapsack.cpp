#include<bits/stdc++.h>
using namespace std;
int main()
{
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--)
    {
        int n,k;
        cin >> n >> k;
        vector<int> v;
        if(n==1)
        {
            cout << 0 << endl;
            continue;
        }
        int cnt = 0;
        cnt = n-k;
        if(cnt)
        {
            for(int i=k+1; i<=n; i++)
            {
                v.push_back(i);
            }
        }
        cnt +=  (k - ceil(k/2.0));
        for(int i=ceil(k/2.0); i<k; i++)
        {
            v.push_back(i);
        }
        cout << cnt << endl;
        for(int i=0; i<v.size(); i++)
        {
            cout << v[i] << " ";
        }
        cout << endl;


    }
    return 0;
}
