#include<bits/stdc++.h>
using namespace std;
int main()
{
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    int n;

    cin >> n;
    vector<int> v;
    int cnt = 0;
    for(int i=1; i<=n; i++)
    {

    while(i%2==0)
    {
        v.push_back(2);
        i = i/2;
    }
    for(int j=3; j<=sqrt(i); j+=2)
    {
        if(i%j==0)
        {
            v.push_back(j);
            i = i/j;
        }
    }
    if(i>2)
    {
        v.push_back(i);
    }

    sort(v.begin(), v.end() );
    v.erase( unique( v.begin(), v.end() ), v.end() );
    if(v.size()==2)
    {
        cnt++;
    }

    v.clear();
    }
    cout << cnt << endl;

    return 0;
}
