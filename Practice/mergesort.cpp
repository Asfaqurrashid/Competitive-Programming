#include<bits/stdc++.h>
using namespace std;
void mergearray(vector<int> &v, int n, int l, int m, int r)
{
    int n1 = m - l + 1;
    int n2 = r - m;
    vector<int> L(n1), R(n2);
    for(int i=0; i<n1; i++)
    {
        L[i] = v[l+i];
    }
    for(int i=0; i<n2; i++)
    {
        R[i] = v[m+1+i];
    }

}
void mergesort(vector<int> &v, int n, int l, int r)
{
    if(l>=r)
    {
        return;
    }
    int mid = l + (r-l)/2;
    mergesort(v,n,l,m;
    mergesort(v,n,m+1,r);
    mergearray(v,n,l,m,r);
}
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++)
    {
        cin >> v[i];
    }
    int l = 0;
    int r = n-1;
    mergesort(v,n,l,r);
    return 0;
}
