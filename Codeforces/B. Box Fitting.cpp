#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,w;
        cin >> n >> w;
        multiset<int> st;
        multiset<int> :: iterator itr;
        for(int i=0; i<n; i++)
        {
            int x;
            cin >> x;
            st.insert(x);
        }
        int h = 1;
        int space = w;
        while(!st.empty())
        {
            itr = st.upper_bound(space);
            if(itr!=st.begin())
            {
                itr--;
                int val = *itr;
                space-=val;
                st.erase(itr);
            }
            else
            {
                h+=1;
                space = w;
            }
        }
        cout << h << endl;
    }
    return 0;
}
