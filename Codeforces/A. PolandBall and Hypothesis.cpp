#include<bits/stdc++.h>
using namespace std;
int checkPrime(int n)
{
    if(n<=1)
    {
        return 0;
    }
    for(int i=2; i*i<=n; i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int n;
    cin >> n;
    if(n==1)
    {
        cout << 3 << endl;
        return 0;
    }
    if(n%2==0)
    {
        for(int i=2; i<=1000; i++)
        {
            int x = n*i + 1;
            if(!checkPrime(x))
            {
                cout << i << endl;
                break;
            }
        }
    }
    else
    {
        cout << 1 << endl;
    }
    return 0;
}
