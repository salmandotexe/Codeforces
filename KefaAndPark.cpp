#include<bits/stdc++.h>
using namespace std;
# define INF 0x3f3f3f3f

//http://codeforces.com/problemset/problem/580/C
//Verdict: Wrong Answer on Test 3.

class Graph
{
    int V;
    list<int> *adj;
public:
    Graph(int V);
    void addEdge(int u, int v);
    void shortestPath(int s);
    void DFS(int s, int *number, int *cats, int *res, int maxcats);
};

Graph::Graph(int V)
{
    this->V = V;
    adj = new list<int>[V];
}
// prints all not yet visited vertices reachable from s
void Graph::DFS(int s, int *number, int *cats, int *res, int maxcats)
{
    int visited[V]={0};
    stack<int> stack;
    stack.push(s);
    int puss=0;
    int f=0;

    if(cats[s])
      f=1;

    while (!stack.empty())
    {
        s = stack.top();
        stack.pop();
        if(cats[s])
          puss++;

        if (!visited[s])
        {
            //cout << s << " ";
            visited[s] = 1;
            number[s]=puss+f; //f is offset for src containing cat.
        }

        if(adj[s].empty())  //leaf
        {
          if(number[s]>maxcats)
            (*res)++;
          puss=0;
        }

        for (auto i = adj[s].begin(); i != adj[s].end(); ++i)
            if (!visited[*i])
                stack.push(*i);
    }
}

void Graph::addEdge(int u, int v)
{
    adj[u].push_back(v);
}

int main()
{
    int V, maxcats,u,v,edges;
    cin >> V >> maxcats;
    Graph g(V);
    int cat[V]={0};
    for(int i=0; i<V;i++)
      cin >> cat[i];

    edges=V-1;
    while(edges--)
    {
      cin >> u >> v;
      g.addEdge(u-1,v-1);
    }
    int number[V]={0};
    int res=0;
    g.DFS(0,number,cat,&res, maxcats);
    cout << res << endl;
}
