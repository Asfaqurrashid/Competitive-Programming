#include<bits/stdc++.h>
using namespace std;
#define ff first
#define ss second
#define mp make_pair
int main()
{
    int b,n,m;
    cin >> b >> n >> m;
    vector<int> key,usb;
    for(int i=0; i<n; i++)
    {
        int x;
        cin >> x;
        key.push_back(x);
    }
    for(int i=0; i<m; i++)
    {
        int x;
        cin >> x;
        usb.push_back(x);
    }
    int ans = -1;
    for(int i = 0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if((key[i]+usb[j])<=b)
            {
                ans = max(ans, (key[i]+usb[j]));
            }
        }
    }

    cout << ans << endl;



    return 0;

}
