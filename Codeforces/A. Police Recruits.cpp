#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++)cin >> v[i];
    int no_of_police = 0;
    int untreated = 0;
    for(int i=0; i<n; i++)
    {
        if(v[i]==-1)
        {
            if(no_of_police<1)
            {
                untreated++;
            }
            else
            {
                no_of_police--;
            }
        }
        else
        {
            no_of_police += v[i];
        }
    }
    cout << untreated << endl;
    return 0;
}
