#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(scanf("%d", &n)!=EOF)
    {
        int a[100001];
        memset(a,0,sizeof(a));
        int i=0;
        for(i =0; n>0; i++)
        {
            a[i] = n%2;
            n = n/2;
        }
        for(int j=i-1; j>=0; j--)
        {
            cout << a[j];
        }
        cout << endl;
    }
    return 0;
}
