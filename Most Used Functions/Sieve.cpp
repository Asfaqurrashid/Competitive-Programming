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
    int n;
    cin >> n;
    cout << prime[n] << endl;

}
