#include <bits/stdc++.h>
#define MAXN (int)(1e5+5)
#define vi vector<int>
#define pb push_back

using namespace std;
int m;

vi V[MAXN];
vi cats(MAXN);
vi visited(MAXN);

int res=0;
void dfs(int src, int cat)
{
  visited[src]=1;
  if(cat>m)
    return;
  if(cat<=m &&V[src].size()==1 &&visited[V[src][0]])    //checks if leaf.
    res++;
  for(auto a:V[src])
  {
    if(!visited[a])
    {
      if(cats[a])
        dfs(a,cat+1);
      else
        dfs(a,0);
    }
  }
}

int main()
{
  int n,u,v;
  cin >> n >> m;

  for(int i=1;i<=n;i++)
    cin >> cats[i];

  V[0].pb(1);
  for(int i=1;i<n;i++)
  {
    cin >> u >> v;
    V[u].pb(v);     //note to self: don't use directed graph for this problem idek why
    V[v].pb(u);
  }
  dfs(0,0);
  cout << res<<endl;
}
