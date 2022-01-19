#include<bits/stdc++.h>
using namespace std;
int main()
{
    int total = 240;
    int n,k;
    cin >> n >> k;
    int remain = 240 - k;
    int cnt = 0;
    int sum = 0;
    for(int i = 1; i<=n; i++)
    {
        sum += i*5;
        if(sum>remain)
        {
            break;
        }
        cnt++;
    }
    cout  << cnt << endl;
    return 0;
}
