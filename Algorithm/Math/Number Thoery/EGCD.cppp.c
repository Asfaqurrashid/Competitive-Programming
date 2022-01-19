#include<bits/stdc++.h>
using namespace std;

int egcd(int a, int b, int &x, int &y)
{
    if(b==0)
    {
        y=0;
        x=1;
        return a;
    }
    int x1,y1;
    int ans =  egcd(b, a%b, x1,y1)
    x = y1;
    y = x1 -(a/b)*y1;
    return ans;
}
int main()
{
    while(1)
    {
        int a,b,x,y;
        cin >> a >> b;
        int gcd = egcd(a,b,x,y);
        cout << "Gcd: " << gcd << endl;
        cout << "x : " << x << endl;
        cout << "y: " << y << endl;

    }
    return 0;
}
