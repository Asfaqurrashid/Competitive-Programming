#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,k;
        cin >> n >> k;
        vector<int> a(n),b(n);
        for(int i=0; i<n; i++) cin >> a[i];
        for(int i=0; i<n; i++) cin >> b[i];
        if(k==0)
        {
            cout << accumulate(a.begin(),a.end(),0) << endl;
            continue;
        }
        sort(a.begin(),a.end());
        sort(b.begin(), b.end());
        reverse(b.begin(),b.end());
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(a[j]<b[i])
                {
                    swap(a[j],b[i]);
                    if(!k)
                    {
                        break;
                    }
                    k--;
                }
            }
            if(!k)
            {
                break;
            }
        }
        cout << accumulate(a.begin(), a.end(),0) << endl;

    }
    return 0;
}
