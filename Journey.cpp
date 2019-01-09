#include <bits/stdc++.h>
#define vi vector<int>
#define pb push_back
#define ll long long
using namespace std;

ll d=0;

double ans=0;
int visited[int(1e5+10)];

void dfs(int src,int parent, vi *ptr, double prob, int depth)
{
  int child=0;
  for(auto a:ptr[src])
    if(a!=parent)
      child++;
  if(child==0)
    ans+=(prob*depth);

  for(auto a:ptr[src])
    if(a!=parent)
      dfs(a,src,ptr,prob/child,depth+1);
}

int main()
{
  int n,u,v;
  cin >> n;
  vi ptr[n+1];
  int N=n-1;
  while(N--)
  {
    cin >> u >> v;
    ptr[u].pb(v);
    ptr[v].pb(u);
  }
  fixed(cout);
  cout<<setprecision(15);
  dfs(1,-1,ptr,1.0,0);


  cout <<ans<<endl;
}
