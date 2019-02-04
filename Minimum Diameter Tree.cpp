#include <bits/stdc++.h>
#define eb emplace_back
#define f first
#define s second

using namespace std;
const int MX = 100010;			// maximum no. of nodes in graph
vector<bool> visited(MX+1,0);

int n,s;
vector<int> G[MX];

int leaves(int src)
{
  int cnt=0;
  queue<int> q;
  q.push(src);

  while(!q.empty())
  {
    int u=q.front();
    q.pop();
    if(G[u].size()==1)
      cnt++;
    visited[u]=1;
    for(auto a:G[u]) if(!visited[a]) q.push(a);
  }
  return cnt;
}

int main()
{
  fixed(cout);
  cout<<setprecision(14);
	std::ios::sync_with_stdio(false);

	cin>>n>>s;

  int u,v;
  int src=-1;
	for(int i = 1 ; i < n ; i++)
	{
		cin>>u>>v;
		G[u].eb(v);
		G[v].eb(u);
    src=v;
	}
  if(n==2)
  {
    cout << (double)(s) <<endl;
    return 0;
  }
  int x0= leaves(src);
  double ans=s/double(x0);
  ans*=2;
  cout <<ans<<endl;
	return 0;
}
