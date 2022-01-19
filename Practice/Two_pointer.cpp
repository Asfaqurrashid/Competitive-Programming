#include<bits/stdc++.h>
using namespace std;
int two_pointer(int a[], int n, int x)
{
    int i = 0;
    int j = n-1;
    while(i<j)
    {
        if(a[i]+a[j]==x)
        {
            return 1;
        }
        else if(a[i]+a[j]<x)
        {
            i++;
        }
        else
        {
            j--;
        }
    }
    return 0;
}
int main()
{
    int n;
    cin >> n;
    int a[n+5];
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    int x;
    cin >> x;
    int len = sizeof(a)/sizeof(a[0]);
    sort(a,a+n);
    int p = two_pointer(a,len,x);
    if(p)
    {
        cout << "found" << endl;
    }
    else
    {
        cout << "not found" << endl;
    }
    return 0;
}
