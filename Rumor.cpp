#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define vi vector<int>
#define pii pair<int,int>
#define mp make_pair

using namespace std;
vi V[int(1e5)+5];

ll res=0;

int visited[int(1e5)+5];

void dfs(int src)
{
    visited[src]=1;
    for(auto a:V[src])
        if(!visited[a])
            dfs(a);
}
int main()
{
    int n,m,u,v;
    int c;
    cin >> n >> m;

    vector<pii> cost;
    for(int i=0;i<n;i++)
    {
        cin >> c;
        cost.pb(mp(c,i+1));
    }
    for(int i=0;i<m;i++)
    {
        cin >> u >> v;
        V[u].pb(v);
        V[v].pb(u);
    }
    sort(cost.begin(),cost.end());
    for(int i=0;i<cost.size();i++)
    {
        if(!visited[cost[i].second])
        {
            res+=cost[i].first;
            if(V[cost[i].second].size())
                dfs(cost[i].second);
        }
    }
    cout << res<<endl;
}
