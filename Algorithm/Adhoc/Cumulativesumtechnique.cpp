#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n),s(n,0);
    for(int i=0; i<n; i++)
    {
        cin >> v[i];
    }
    for(int i=1; i<=n; i++)
    {
        s[i] = s[i-1] + v[i-1];
    }
    for(int i=1; i<=n; i++)
    {
        cout << s[i] << " ";
    }
    return 0;
}
