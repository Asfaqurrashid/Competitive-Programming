#include<bits/stdc++.h>
using namespace std;
int isPrime(int n) // Time complexity at worst case O(n)
{
    if(n<=1)
    {
        return 0;
    }
    for(int i=2; i<n; i++)
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
    while(1)
    {
        int n;
        cin >> n;
        int x = isPrime(n);
        if(x)
        {
            cout << n << " is a prime Number" << endl;
        }
        else
        {
            cout << n << " is not a prime number" << endl;
        }
    }
    return 0;
}

