#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
int main()
{

    int n;
    cin >> n;
    int number = (n*(pow(n,2)+1))/2;
    vector<vector<int> > s(3);
    for(int i=0; i<n; i++)
    {
        s[i].resize(3);
        for(int j=0; j<n ; j++)
        {
            cin >> s[i][j];
        }
    }


    return 0;
}
