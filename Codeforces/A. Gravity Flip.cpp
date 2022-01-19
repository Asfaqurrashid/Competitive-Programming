#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++) cin >> v[i];
    reverse(v.begin(), v.end());
    for(int i=0; i<(n-1); i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(v[i]<v[j])
            {
                int ck = v[j] - v[i];
                v[i] += ck;
                v[j] -= ck;
            }
        }
    }
    reverse(v.begin(), v.end());
    for(int i=0; i<n; i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}
