#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n+1),sum(n);
    sum[0] = 0;
    for(int i=1; i<=n; i++)
    {
        cin >> v[i];
        sum[i] = sum[i-1] + v[i];
    }


    return 0;
}
