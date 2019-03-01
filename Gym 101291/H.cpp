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
int dr[]={-1,0,1,0};
int dc[]={-1,0,1,0};

void dfs(pii A)
{
  int u=A.f;
  int v=A.s;
  G[u][v]='X';
  for(int a:dr)
  for(int b:dc)
  {
    if(a!=b && a!=-b)
    {
      if(G[u+a][v+b]=='L')
        dfs(mp(u+a,v+b));
    }
  }
}
int main()
{
  int n,m;
  cin >> n >> m;
  vector<pii> isl;
  for(int i=1;i<=n;i++) for(int j=1;j<=m;j++)
  {
    cin >> G[i][j];
    if(G[i][j]=='L') isl.pb(mp(i,j));
    if(G[i][j]=='C') G[i][j]='L';
  }

  int res=0;
  for(auto a:isl)
  {
    if(G[a.f][a.s]=='L')
    {
      dfs(a);
      res++;
    }
  }
  cout <<res<<endl;
}
