#include<bits/stdc++.h>
using namespace std;
int reverse_int(int x)
{
    int res = 0;
    while(x!=0)
    {
        int pop = x%10;
        x = x/10;
        int candidate = res*10 + pop;
        if(candidate/10!=res)
        {
            return 0;
        }
        res = candidate;

    }
    return res;
}
int main()
{
    int x;
    cin >> x;
    cout << reverse_int(x) << endl;
    return 0;
}
