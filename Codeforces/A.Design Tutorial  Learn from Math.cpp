#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[] =  {4,6,8,9,10,12};
    for(int i=0; i<6; i++)
    {
        int x = n - a[i];
        if(x%2==0)
        {
            cout << x << " "<< a[i] << endl;
            break;
        }
    }
    return 0;
}
