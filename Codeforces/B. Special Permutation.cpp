#include<bits/stdc++.h>
using namespace std;
#define pb push_back
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,a,b;
        cin >> n >> a >> b;
        vector<int>l,r,mid;
        for(int i=1; i<a; i++)
        {
            if(i<b)
            {
                r.pb(i);
            }
        }
        for(int i=b+1; i<=n; i++)
        {
            if(i>a)
            {
                l.pb(i);
            }
        }
        l.pb(a);
        r.pb(b);
        bool ck = 0;
        if(a>b)
        {
            if(l.size() + r.size() != n || l.size() != r.size())
            {

                ck = 1;
            }
        }
        else
        {
            int d = n/2;
            for(int i=a+1; i<b; i++)
            {
                mid.pb(i);
            }
            int k = 0;
            for(int i=0; i<mid.size(); i++)
            {
                if(l.size()<d)
                {
                    l.pb(mid[i]);
                    k++;
                }

            }
            for(int i=k; i<mid.size(); i++)
            {
                if(r.size()<d)
                {
                    r.pb(mid[i]);
                }
            }
            if(l.size() != r.size() || l.size() + r.size() !=n)
            {
                ck = 1;
            }
        }
        if(ck)
        {
            cout << -1 << endl;
        }
        else
        {
            for(int i=0; i<l.size(); i++) cout << l[i] << " ";
            for(int i=0; i<r.size(); i++) cout << r[i] << " ";
            cout << endl;
        }
        l.clear();
        r.clear();
        mid.clear();
    }
    return 0;
}
