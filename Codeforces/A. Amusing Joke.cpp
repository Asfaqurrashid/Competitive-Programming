#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<char,int>m,m2;
    string guest,host,found;
    cin >> guest >> host >> found;
    for(int i=0; i<guest.length(); i++)
    {
        m[guest[i]]++;
    }
    for(int i=0; i<host.length(); i++)
    {
        m[host[i]]++;
    }
    for(int i=0; i<found.length(); i++)
    {
        m2[found[i]]++;
    }
    if(m.size()==m2.size())
    {
        int cnt = 0;
        map<char,int> :: iterator itr,it;
        for(itr = m.begin(), it = m2.begin(); itr != m.end(); ++itr,++it)
        {
            if(itr->second == it->second)
            {
                cnt++;
            }
        }
        if(cnt==m.size())
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}
