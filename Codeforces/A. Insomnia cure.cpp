#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,l,m,n,d;
    cin >> k >> l >> m >> n >> d;
    vector<int>v(d+1,0);
    for(int i=1; i<=d; i++)
    {
        if(i%k==0)
        {
            v[i] = 1;
        }
         if(i%l==0)
        {
            v[i] = 1;
        }
        if(i%m==0)
        {
            v[i] = 1;
        }
        if(i%n==0)
        {
            v[i] = 1;
        }

    }
    int ck = 0;
    for(int i=1; i<=d; i++)
    {
        if(v[i]==1)
        {
            ck++;
        }
    }
    cout << ck << endl;
    return 0;
}
