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
        for(int i=0; i<n; i++)
        {
            cin >> v[i];
        }
        int smallest = *min_element(v.begin(), v.end());
        int cnt = 0;
        for(int i=0; i<n; i++)
        {
            if(smallest == v[i])
            {
                cnt++;
            }
        }
        cout << n - cnt << endl;
    }
    return 0;
}
