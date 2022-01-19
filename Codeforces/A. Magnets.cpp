#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<string>v(n);
    for(int i=0; i<n; i++)
    {
        cin >> v[i];

    }
    string prev = v[0];
    int cnt = 1;
    for(int i=1; i<n; i++)
    {
        if(v[i]!=prev)
        {
            cnt++;
            prev = v[i];
        }
    }
    cout << cnt << endl;
    return 0;
}
