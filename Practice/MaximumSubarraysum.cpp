#include<bits/stdc++.h>
using namespace std;
int f(vector<int> &v, int n)
{
    int best = 0;
    for(int i=0; i<n; i++)
    {
        int maxx = max(v[i], maxx+v[i]);
        best = max(maxx,best);
    }
    return best;
}
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++)
    {
        cin >> v[i];
    }
    cout << f(v,n) << endl;
    return 0;
}
