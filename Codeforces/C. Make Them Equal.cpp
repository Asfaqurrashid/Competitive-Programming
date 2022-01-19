#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        char ch;
        cin >> n >> ch;
        string s;
        cin >> s;
        int cnt = 0;
        for(int i=0; i<n; i++)
        {
            if(s[i]==ch)
            {
                cnt++;
            }
        }
        if(cnt == n)
        {
            cout << 0 << endl;
        }
        else
        {
            int x;
            if(n%2==0)
            {
                x = n/2;
            }
            else
            {
                x = (int)(n/2);
            }
            int ck = 0;
            int pos;
            for(int i = x; i<n; i++)
            {
                if(s[i]==ch)
                {
                    ck = 1;
                    pos = i+1;
                    break;
                }
            }
            if(ck)
            {
                cout << 1 << endl;
                cout << pos << endl;

            }
            else
            {
                cout << 2 << endl;
                cout << n << " " << n-1 << endl;


            }

        }
    }
    return 0;
}
