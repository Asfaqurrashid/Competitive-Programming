#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const int maxn = 1e6+5;
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
    ll n;
    cin >> n;
    ll a[n+5];
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    for(int i=0; i<n; i++)
    {
        if(a[i]<=1)
        {
            cout << "NO" << endl;
            continue;
        }
        if(ceil(sqrt(a[i]))== floor(sqrt(a[i])))
        {
            ll check = sqrt(a[i]);
            if(!prime[check])
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
