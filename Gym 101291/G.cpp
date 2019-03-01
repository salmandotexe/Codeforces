#include <bits/stdc++.h>
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
#define eb emplace_back
#define pb push_back
#define f first
#define s second
#define fast_cin ios_base::sync_with_stdio(false);cin.tie(NULL);
#define precise fixed(cout);cout<<setprecision(5);
using namespace std;

ostream& operator << (ostream &out, vector<int> &v) { for(auto a:v) out << a<<" "; out<<endl; }
char G[60][60];

void dfs(pii A)
{
  int u=A.first; int v=A.second;
  if(G[u+1][v]=='.')
  {
    swap(G[u][v],G[u+1][v]);
    dfs(mp(u+1,v));
  }
}
int main()
{
  int n,m;
  cin >> n >> m;
  for(int i=1;i<=n;i++) for(int j=1;j<=m;j++) cin >> G[i][j];

  for(int i=n;i>=1;i--) for(int j=m;j>=1;j--) if(G[i][j]=='o') dfs(mp(i,j));

  for(int i=1;i<=n;i++)
  {
     for(int j=1;j<=m;j++)
       cout << G[i][j];
     cout<<endl;
  }
}
