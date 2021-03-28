#include<bits/stdc++.h>
using namespace std;
string S;
string T;
int lcs(int i, int j, int count)
{
    if(i==0 || j==0)
    {
        return count;
    }

    if(S[i-1]==T[j-1])
    {
        count = lcs(i-1,j-1,count+1);
    }
    count = max(count, max(lcs(i,j-1,0),lcs(i-1,j,0)));

    return count;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {

         cin >> S;
         cin >> T;
         int x = S.size();
         int y = T.size();
         int total = x+y;
         cout << abs(total -  lcs(x,y,0)) << endl;
    }


    return 0;
}
