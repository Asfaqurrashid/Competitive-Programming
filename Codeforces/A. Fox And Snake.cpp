#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin >> n >> m;
    bool flag = 0;
    bool ck = 1;
    for(int i=1; i<=n; i++)
    {

        for(int j=1; j<=m; j++)
        {
            if(i%2==0)
            {
                if(j==1 || j==m)
                {
                    if(j==1 && flag)
                    {
                        cout << "#";



                    }

                     else if(j==m && ck)
                    {
                        cout << "#";



                    }
                    else
                    {
                        cout << ".";
                    }

                }
                else
                {
                    cout << ".";
                }
            }
            else
            {
                cout << "#";
            }




        }
         if(i%2==0)
            {
            ck = !ck;
            flag = !flag;
            }
        cout << endl;
    }
    return 0;
}
