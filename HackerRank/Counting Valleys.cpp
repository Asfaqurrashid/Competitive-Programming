#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string str;
    cin >> str;
    stack<char> s;
    int cnt = 0;
    for(int i=0; i<n; i++)
    {
        if(s.empty())
        {
            s.push(str[i]);
        }
        else
        {
            if(str[i]==s.top())
            {
                s.push(str[i]);
            }
            else
            {
                s.pop();
                if(s.empty())
                {
                    if(str[i]=='U')
                    {
                        cnt++;
                    }
                }

            }
        }
    }
    cout << cnt << endl;

    return 0;
}
