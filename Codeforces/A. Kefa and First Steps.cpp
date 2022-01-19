#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int>v(n),f(n);
    for(int i=0; i<n; i++) cin >> v[i];
    f[0] = 1;
    int best = 1;
    for(int i=1; i<n; i++)
    {
        if(v[i]>=v[i-1])
        {
            f[i] = f[i-1] + 1;
        }
        else
        {
            f[i] = 1;
        }
        best = max(best,f[i]);
    }
    cout << best << endl;
    return 0;
}
