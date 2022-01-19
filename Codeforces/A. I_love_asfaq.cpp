    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
        int n;
        cin >> n;
        vector<int>v(n);
        for(int i=0; i<n; i++) cin >> v[i];
        int minn = v[0], maxx = v[0];
        int cnt = 0;
        for(int i=1; i<n; i++)
        {
            if(maxx<v[i])
            {
                cnt++;
                maxx = v[i];
            }
            if(minn>v[i])
            {
                cnt++;
                minn = v[i];
            }
        }
        cout << cnt << endl;
        return 0;
    }
