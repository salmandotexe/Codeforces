#include <bits/stdc++.h>
using namespace std;


class Graph{
  int V,E;
  list<int> *ptr;
public:
  Graph(int v)
  {
    V=v;
    ptr= new list<int>[V+1];
  }
  void addedge(int u, int v)
  {
    ptr[u].push_back(v);
  }
  void DFS(int s, int *cats, int *dist);
};

void Graph::DFS(int s, int *cats, int *dist)
{
  int visited[V+1]={0};
  stack<int> stack;
  stack.push(s);

  while (!stack.empty())
  {
    s = stack.top();
    stack.pop();
    if (!visited[s])
    {
      visited[s] = 1;
      //if(cats[s])
        //dist[s]=1;
    }

    for (auto i = ptr[s].begin(); i != ptr[s].end(); ++i)
      if (!visited[*i])
      {
        stack.push(*i);
        cats[*i]=cats[s]+cats[*i];

      }

      if(ptr[s].empty())
      cout << "Leaf at "<<s << " has met "<< cats[s] << " cats so far\n";
  }
}


int main()
{
  int n,k,maxcats,x;
  cin >> n >> maxcats;
  int cats[n+1];
  int dist[n+1]={0};

  Graph g(n);
  cats[0]=0;

  for(int i=1;i<=n;i++)
  {
    cin >> x;
    cats[i]=x;
  }

  k=n-1;
  int u,v;

  while(k--)
  {
    cin >> u >> v;
    g.addedge(u,v);
  }
  g.DFS(1,cats,dist);
}
