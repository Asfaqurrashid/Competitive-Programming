#include<bits/stdc++.h>
using namespace std;
#define pb push_back
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        string s,str="";
        cin >> s;
        vector<char>vect;
        for(int i=0; i<n; i++)
        {
            vect.pb(s[i]);
        }
        sort(vect.begin(), vect.end());
        for(int i=0; i<vect.size(); i++)
        {
            str.pb(vect[i]);
        }
        if(s == str)
        {
            cout << 0 << endl;
            continue;
        }

        int l = 0,r = n-1;
        vector<int> v;
        while(l<r)
        {
            if(s[l]== '1' && s[r]=='0')
            {
                swap(s[l],s[r]);
                v.pb(l+1);
                v.pb(r+1);
                l++;
                r--;
            }
            else if(s[r]=='1')
            {
                r--;
            }
            else if(s[l]=='0')
            {
                l++;
            }
            else
            {
                l++;
                r--;
            }
        }
        sort(v.begin(),v.end());
        cout << 1 << endl;
        cout << v.size() << " ";
        for(int i=0; i<v.size(); i++)
        {
            cout << v[i] << " ";
        }
        cout << endl;
        v.clear();
    }

    return 0;
}
