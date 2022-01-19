#include<bits/stdc++.h>
using namespace std;
#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define ll long long int
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
           ll n;cin>>n;
           vector<ll> a(n);
           for(int i=0;i<n;i++) cin>>a[i];
           string s;
           cin>>s;
           for(int i=0;i<n;i++)
           {
           if(a[i]<0 && s[i]=='B')
           {
               cout << "NO" << endl;
               continue;
           }
           else if(a[i]>n && a[i]=='R')
           {
               cout << "NO" << endl;
               continue;
           }

           }

            vector<ll> blue,red;
            for(int i=0;i<n;i++)
            if(s[i]=='B') blue.push_back(a[i]);
            else red.push_back(a[i]);

            sort(blue.begin(),blue.end());
            sort(red.begin(),red.end());
            ll i=0,j=0;
            ll cnt = 1;
            bool flag = 1;
            while(i<blue.size() && j<red.size()){
             if(blue[i]>=cnt) i++;
             else if(red[j]<=cnt)  j++;
             else{
              flag = 0;
              break;
               }
              cnt++;
    }

    if(flag==0){
        cout<<"NO"<<endl;
        continue;
    }

    while(j<red.size()){
        if(red[j]>cnt){
            flag = 0; break;
        }
        cnt++;
        j++;
    }

    if(flag==0){
        cout<<"NO"<<endl;
        continue;
    }

    while(i<blue.size())
    {
        if(blue[i]<cnt) {
            flag = 0; break;
        }
        cnt++;
        i++;
    }
    if(flag) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    }
    return 0;
}
