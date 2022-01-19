#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s1,s2,s3,s4;
    map<int,int>m;
    cin >> s1 >> s2 >> s3 >> s4;
    m[s1]++;
    m[s2]++;
    m[s3]++;
    m[s4]++;
    map<int,int> :: iterator itr;
    int sum = 0;
    for(itr = m.begin(); itr!=m.end();++itr)
    {
        if((itr->second) >= 2)
        {
            sum += (itr -> second) - 1;

        }
    }
    cout << sum << endl;
    return 0;
}
