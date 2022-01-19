#include<bits/stdc++.h>
#define valid(nx,ny) nx>=1 && nx<=r && ny>=1 && ny<=c
using namespace std;
int main()
{
    int r = 4;
    int c = 5;
    if(valid(4,6))
    {
        cout << "valid" << endl;
    }
    else
    {
        cout << "not valid" << endl;
    }
    return 0;
}
