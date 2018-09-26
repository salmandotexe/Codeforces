#include <bits/stdc++.h>
#define pb push_back

using namespace std;
typedef vector<vector<int>> vii;
typedef vector<int> vi ;
typedef vector<bool> vb ;

int N,a;
int u,v;

void dfs(int src, vii &ptr, vi &dist, vb &visited, int level)
{
  visited[src]=true;
  dist[src]=level;
  for(auto a:ptr[src])
    if(!visited[a])
      dfs(a,ptr,dist,visited,level+1);
}

int main()
{
  cin >> N>>a;
  vii ptr(N+1);
  for(int i=1;i<N;i++)
  {
    cin >> u >> v;
    ptr[u].pb(v);
    ptr[v].pb(u);
  }
  vi dist(N+1);
  vb visited(N+1,false);
  dfs(a,ptr,dist,visited,1);
  int x=*max_element(dist.begin(),dist.end());
  cout << x <<endl;
}
