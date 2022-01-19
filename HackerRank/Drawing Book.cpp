#include<bits/stdc++.h>
using namespace std;
#define ff first
#define ss second
int main()
{
    int n,p;
    cin >> n >> p;
    vector< pair<int,int> > v;
    v.push_back(make_pair(0,1));
    if(n%2==0)
    {
        for(int i=2; i<=(n-2); i+=2)
        {
            v.push_back(make_pair(i,i+1));
        }
        v.push_back(make_pair(n,0));
    }
    else
    {
        for(int i=2; i<=(n-1); i+=2)
        {
            v.push_back(make_pair(i,i+1));
        }
    }
    int len = v.size();
    int len_i;
    int len_j;
    for(int i = 0; i<len; i++)
    {
        if(v[i].ff == p || v[i].ss == p)
        {
            len_i = i;
        }
    }
    for(int j=len-1; j>=0; j--)
    {
        if(v[j].ff == p || v[j].ss == p)
        {
            len_j = (len-1) - j;
        }
    }
    cout << min(len_i,len_j) << endl;

    return 0;
}
