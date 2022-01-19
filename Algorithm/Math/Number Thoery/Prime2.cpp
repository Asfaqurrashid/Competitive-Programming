#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int isPrime(int n)  // Time complexity at worst case O(sqrt(n))
{
    if(n<=1)
    {
        return 0;
    }
    for(int i=2; i*i<=n; // i*i <=n and i<=sqrt(n) both are same except some calculation    {
        if(n%2==0)
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
        ll n;
        cin >> n;
        ll x = isPrime(n)
        if(x)
        {
            cout << n << " is a prime number" << endl;
        }
        else
        {
            cout << n << " is not a prime number" << endl;
        }
    }
    return 0;
}
