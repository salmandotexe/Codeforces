#include <bits/stdc++.h>
#define ll long long int
#define vi vector<int>
#define vll vector<ll>
#define vvi vector < vi >
#define pii pair<int,int>
#define pll pair<long long, long long>
#define mod 1000000007
#define inf 1000000000000000001
#define all(c) c.begin(),c.end()
#define mp(x,y) make_pair(x,y)
#define mem(a,val) memset(a,val,sizeof(a))
#define eb emplace_back
#define pb push_back
#define f first
#define s second
#define fast_cin ios_base::sync_with_stdio(false);cin.tie(NULL);
#define precise fixed(cout);cout<<setprecision(16);
#define OUT(x) for(auto a:x) cout << a << " "; cout << endl;
#define OK cout << "ok" <<endl;
 
using namespace std;
int n,m,k;
 
const int maxn=505;
char G[maxn][maxn];
bool vis[maxn][maxn];
 
int dx[]={-1,0,1,0};
int dy[]={0,-1,0,1};
inline void dfs(int ii, int jj)
{
	vis[ii][jj]=1;
	for(int v=0;v<4;v++){
		int ty=ii+dy[v];
		int tx=jj+dx[v];
		if(tx<1 || ty < 1 || tx>m || ty > n || G[ty][tx]=='#' || G[ty][tx]=='X' || vis[ty][tx])  continue;
		dfs(ty,tx);
	}
	if(k>0) G[ii][jj]='X',k--;
}
 
int main()
{
	fast_cin
	cin >> n >> m >> k;
 
	int ii,jj;
	for(int i=1;i<=n;i++) for(int j=1;j<=m;j++) {
		cin >> G[i][j];
		if(G[i][j]=='.'){
			ii=i,jj=j;
		}
	}
	dfs(ii,jj);
	for(int i=1;i<=n;i++) {
		for(int j=1;j<=m;j++) cout << G[i][j];
		cout << endl;
	}
}
