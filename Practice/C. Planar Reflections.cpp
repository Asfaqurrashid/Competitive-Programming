#include<bits/stdc++.h>
using namespace std;
const int N = 1001;
const int K = 1001;
const int mod = 1e9 + 7;


int dp[N][K][2];



int solve(int curr, int k, int dir)
{
    if(k==1)
    {
        return 1;
    }
    if(dp[curr][k][dir]!=-1)
    {
        return dp[curr][k][dir];
    }

}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,k;
        cin >> n >> k;
        memset(dp,-1,sizeof(dp));
        cout << solve(1,k,1) << endl;
    }
    return 0;
}
