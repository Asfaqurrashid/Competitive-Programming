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
    sort(v.begin(), v.end());
    int minn = 1e9;
    for(int i=1; i<n; i++)
    {
        minn = min(minn, v[i] - v[i-1]);
    }
    cout << minn << endl;
    }
    return 0;
}
