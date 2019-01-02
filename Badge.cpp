#include <bits/stdc++.h>
#define vi vector<int>
#define pb push_back
using namespace std;

vi ptr[1002];
int visited[1002];
int b=1;
void dfs(int src)
{
  if(visited[src]==b)
  {
    cout << src<< " ";
    return;
  }
  visited[src]=b;
  for(auto a:ptr[src])
    dfs(a);
}

int main()
{
  int n,u;
  cin >> n;

  for(int i=1;i<=n;i++)
  {
    cin >> u;
    ptr[i].pb(u);
  }
  for(int i=1;i<=n;i++)
  {
    dfs(i);
    b++;
  }
}
