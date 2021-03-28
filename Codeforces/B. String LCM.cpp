#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        char s1[1001],s2[1001];
        cin >> s1 >> s2;
        int len_1 = strlen(s1);
        int len_2 = strlen(s2);
        int minn = min(len_1,len_2);
        if(len_1%minn==0 && len_2%minn==0)
        {

        }
        else
        {
            if(len_1>len_2)
            {
                for(int i=0; i<=len_1 - len_2; i++)
                {
                    int j;
                    for(j=0; j<len_2; j++)
                    {
                        if(s1[i+j]!=s[j])
                        {
                            continue;
                        }

                    }


                }
            }
        }

    }
    return 0;
}
