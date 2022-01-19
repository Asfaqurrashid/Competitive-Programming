#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++)
    {
        cin >> v[i];
    }
    vector<int>length(n);
    int best = 0;
    for(int k=0; k<n; k++)
    {
        length[k] = 1;
        for(int i=0; i<k; i++)
        {
            if(v[i]<v[k])
            {
                length[k] = max(length[k],length[i]+1);
            }
        }
        best = max(best,length[k]);

    }
    cout << best << endl;
    return 0;
}
