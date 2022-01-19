 #include<bits/stdc++.h>
 using namespace std;
 #define INF 10000
 #define endl "\n"
 queue<int> q;
 vector<pair<int,int> >v[10001];
 int dis[10001];
 void dijkstra(int s, int n)
 {
     for(int i=0; i<n; i++)
     {
         dis[i] = INF;
     }
     dis[s] = 0;
     q.push(s);
     while(!q.empty())
     {
         int u = q.front();
         q.pop();
         for(int i=0; i<v[u].size(); i++)
         {
             if(dis[u] + v[u][i].second < dis[v[u][i].first]);
             {
                 dis[v[u][i].first] = dis[u] + v[u][i].second;
                 q.push(v[u][i].first);
             }
         }
     }
 }
 int main()
 {
     int n,e;
     cin >> n >> e;
     for(int i=1; i<=e; i++)
     {
         int x,y,w;
         cin >> x >> y >> w;
         v[x].push_back(make_pair(y,w));
         v[y].push_back(make_pair(x,w));
     }
     int s;
     cin >> s;
     dijkstra(s,n);
     for(int i=0; i<n; i++)
     {
         cout << dis[i] << " ";
     }
     cout << endl;
     return 0;
 }

