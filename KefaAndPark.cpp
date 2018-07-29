#include <bits/stdc++.h>

//Wrong Answer on Test 8. possibly on corner case?

using namespace std;

typedef vector<int> vi;

class Graph{
public:
  int V;
  vi *ptr;
  Graph(int Ve)
  {
    V=Ve;
    ptr = new vi[V+1];
  }
  void add(int u, int v)
  {
    ptr[u].push_back(v);
  }

  void dfs(int src, vector<bool> &visited, vi &cat, int currcount, int maxcount, vi &dist, int &res)
  {
    if(!visited[src])
    {
      visited[src]=1;
      if(cat[src])
        currcount++;
      if(currcount>maxcount)
      {
        dist[src]=-currcount;
      }
      if (cat[src]==0)
        currcount=0;
      if(ptr[src].empty())
      {
        if(dist[src]>0)
        {
          res++;
        }
      }
      for(auto a:ptr[src])
      {
        if(!visited[a])
        {
          if(dist[src]<0)
            dist[a]=-currcount;
          dfs(a,visited,cat,currcount,maxcount,dist,res);
        }
      }
    }
  }
  void dfs(int src, int maxcount, vi &cat)
  {
    vector<bool> visited(V+1,false);
    vi dist(V+1,1);
    int res=0;
    dfs(src,visited, cat, 0,maxcount, dist,res);
    cout << res << endl;
  }
};

int main()
{
    int V, maxcats,u,v;
    cin >> V >> maxcats;
    Graph g(V);
    vi cat(V+1,0);
    for(int i=1; i<=V;i++)
    {
      int x;
      cin >> x;
      cat[i]=x;
    }

    for(int i=1;i<V;i++)
    {
      cin >> u >> v;
      g.add(u,v);
    }
    g.dfs(1,maxcats, cat);
}
