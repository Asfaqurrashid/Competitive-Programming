#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        char s[n+5];
        cin >> s;

        int ck = 0;
        for(int i=0; i<(n-3); i++)
            {
                if(s[i]=='2')
                {
                    for(int j=i+1; j<(n-2); j++)
                    {
                        if(s[j]=='0')
                        {
                            for(int k=j+1; k<(n-1); k++)
                            {
                                if(s[k]=='2')
                                   {
                                    for(int l=k+1; l<n; l++)
                                    {
                                        if(s[l]=='0')
                                        {
                                            ck = 1;
                                        }
                                    }
                                   }
                            }
                        }
                    }
                }
            }
            if(ck)
            {
                if(s[n-1]=='0' && s[n-2]=='2')

                {
                    cout << "YES" << endl;
                }
                else if
                {
                    for(int i=n-1; i>1; i--)
                    {
                        if(s[i]=='0' && s[i-1]=='2')
                        {

                        }
                    }
                }
                else if(n==5)
                {
                    if(s[n-2]=='2' || s[n-3]=='2')
                }
            }
            else
            {
                cout << "NO" << endl;
            }
    }
    return 0;
}
