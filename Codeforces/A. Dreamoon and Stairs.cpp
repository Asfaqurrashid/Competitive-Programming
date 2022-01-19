#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n,m;
     cin >> n >> m;
     if(m>n)
     {
         cout << "-1" << endl;
         return 0;
     }
     int step_02 = n/2;
     step_02 += n%2;
     int ans = ceil(step_02*1.0/m*1.0);
     cout << ans*m << endl;

    return 0;
}
