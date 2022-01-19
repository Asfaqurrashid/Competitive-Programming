#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack< char > s;
    string str;
    cin >> str;
    int flag = 0;
    for(int i=0; i<str.size(); i++)
    {
        if(str[i]=='(')
        {
            s.push(str[i]);
        }
       else
        {
            if(s.empty())
            {

                flag = 1;
                break;
            }
            else
            {
                int v = s.top();
                if(v==')')
                {
                    flag = 1;
                    break;

                }
                else
                {
                    s.pop();
                }
            }
        }
    }
    if(s.empty() && !flag)
    {
        cout << "Balanced" << endl;
    }
    else
    {
        cout << "Not Balanced" << endl;
    }
    return 0;
}
