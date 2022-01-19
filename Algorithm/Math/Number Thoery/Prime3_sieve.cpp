#include<bits/stdc++.h>
using namespace std;
const int maxx = 1e6+5;
bool prime[maxx];
void sieve()
{
    prime[0] = prime[1] = 1;
    for(int i=2; i<=maxx; i++)
    {
        if(!prime[i])
        {
            for(int j=i+i; j<=maxx; j+=i)
            {
                if(!prime[j])
                {
                    prime[j] = 1;
                }
            }
        }
    }
}
int main()
{
    int n;
    cin >> n;
    sieve();
    if(!prime[n])
    {
        cout << "Prime" << endl;
    }
    else
    {
        cout << "Not Prime" << endl;
    }
    return 0;
}
