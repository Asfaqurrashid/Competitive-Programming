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
        string se,sg;
        cin >> se;
        cin >> sg;
        int cnt = 0;
        vector<bool>taken(n);
        for(int i=0; i<n; i++)
        {
            if(sg[i]== '1')
            {
                if(se[i]== '0')
                {
                    cnt ++ ;
                }
                else if(se[i-1]=='1' && i-1>=0 && !taken[i-1])
                {
                    taken[i-1] = 1;
                    cnt++;
                }
                else if(se[i+1]=='1' && i+1<=n-1 && !taken[i+1])
                {
                    taken[i+1] = 1;
                    cnt ++;
                }
                else
                {
                    continue;
                }
            }
        }
        cout << cnt << endl;


    }
    return 0;
}
