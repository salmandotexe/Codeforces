#include <bits/stdc++.h>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstring>
#include <complex>
#include <chrono>
#define endl "\n"
#define ll long long int
#define vi vector<int>
#define vll vector<ll>
#define vvi vector < vi >
#define pii pair<int,int>
#define pll pair<long long, long long>
#define mod 1000000007
#define inf 1000000000000000001;
#define all(c) c.begin(),c.end()
#define mp(x,y) make_pair(x,y)
#define mem(a,val) memset(a,val,sizeof(a))
#define pb push_back
#define f first
#define s second

using namespace std;

const int MX = 100010;			// maximum no. of nodes in graph
vector<bool> visited(MX+1,0);
int n;

vector<int> G[MX+1];

int main()
{
	std::ios::sync_with_stdio(false);
	int n,m,u,v;
  cin >> n >> m;
	for(int xxx=0;xxx<m;xxx++)
	{
		cin >> u >> v;
    G[u].pb(v);
    G[v].pb(u);
	}

  priority_queue <int, vector<int>, greater<int>> pq;
  pq.push(1);

  vi res;
  while(!pq.empty())
  {
    int u=pq.top();
    res.pb(u);
    visited[u]=1;

    pq.pop();

    for(auto a:G[u])
      if(!visited[a])
      {
        pq.push(a);
        visited[a]=1;
      }
  }
  for(auto a:res) cout << a << " ";
	return 0;
}
