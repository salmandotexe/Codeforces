#include <bits/stdc++.h>

using namespace std;
int level[int (2e5+5)];
bool visited[int (2e5+5)];

int bfs(int n, int m)
{
  queue<int> q;
  q.push(n);
  int c=0;
  while(!q.empty())
  {
    int s=q.front();
    visited[s]=1;
    q.pop();

    if(s==m)
      return level[s];
    if(!visited[2*s] && s<m)
    {
        visited[2*s]=1;
        level[2*s]=level[s]+1;
        q.push(2*s);
    }
    if(s-1>=1 && !visited[s-1]) //avoid s=0.
    {
        visited[s-1]=1;
        level[s-1]=level[s]+1;
        q.push(s-1);
    }
  }
  return -1;
}
int main()
{
  int n,m;
  cin >> n >> m;
  cout << bfs(n,m)<<endl;
}
