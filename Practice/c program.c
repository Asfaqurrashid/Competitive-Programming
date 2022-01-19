#include<stdio.h>
int main()
{
    int t,n;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d", &n);
        (n&1 || n == 0)? printf("-1\n") : printf("%d\n", n/2);
    }
    return 0;
}
