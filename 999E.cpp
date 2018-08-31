#include <bits/stdc++.h>
//WA on Test 4
using namespace std;

class Graph{
  public:
  int V;
  int E;
  list<int> *ptr;
  vector<int> *conn;
  Graph(int g)
  {
    V=g;
    ptr=new list<int>[V+1];
    //conn=new vector<int>(V+1,0);
  }
  void addedge(int u, int v)
  {
    ptr[u].push_back(v);//digraph.
  }

  int dfs(int src, int *visited)
  {
    stack<int> stack;
    stack.push(src);
    int c=0;
    while(!stack.empty())
    {
      int s=stack.top();
      c++;
      stack.pop();
      visited[s]=1;
      for(auto a:ptr[s])
        if(!visited[a])
          stack.push(a);
    }
    return c;
  }


};
int main()
{
  int n,m,c,u,v;
  cin >> n >> m >> c;
  Graph g(n);
  int visited[n+1]={0};

  while(m--)
  {
    cin >> u >> v;
    g.addedge(u,v);
  }
  int bad= g.dfs(c,visited);
  vector<pair<int,int> >lol;
  for(int i=1;i<g.V+1;i++)
  {
    if(visited[i]==0)
    {
      int tmp[n+1]={0};
      for(int i=0;i<=n;i++)
        tmp[i]=visited[i];
      int badcount=g.dfs(i,tmp);
      lol.push_back(make_pair(bad,i));
    }
  }
  int res=0;
  sort(lol.begin(),lol.end());
  reverse(lol.begin(),lol.end());
  for(auto cc:lol)
  {
    if(!visited[cc.second])
    {
      res++;
      g.dfs(cc.second,visited);
    }
  }
  cout << res << endl;
}
