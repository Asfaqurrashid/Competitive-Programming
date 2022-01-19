#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const int maxn = 1e6+5; // check prime to 10^6+5
bool prime[maxn];
void sieve()
{
    prime[0]=prime[1] = 1;
    for(int i = 2;i < maxn;i++){
        if(!prime[i]){
            for(int j = i+i;j < maxn;j += i){
                if(!prime[j]) prime[j]= 1;
            }
        }
    }
}

int main()
{
   sieve();
   int t;
   cin >> t;
   while(t--)
   {
       int d;
       cin >> d;
       int x = d;
       x = x + 1;
       int ck = 0;
       while(prime[x])
       {
           x++;

       }

       int y = x;
       y = y+d;
       while(prime[y])
       {
           y++;

       }

       cout << x*y << endl;

   }

    return 0;
}
