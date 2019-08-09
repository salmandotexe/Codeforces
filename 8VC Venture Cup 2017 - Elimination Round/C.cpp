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
using namespace std;
 
// Disjoint Set DataStructure
const int maxn=10005;
int parent[maxn]; 		// reserve space for map if n > 10000
int urank[maxn];
 
void create(ll x)
{
	parent[x] = x ;
	urank[x] = 0 ; 		// rank = no. of nodes in its subtree
}
ll find(ll x)
{
	if( parent[x] != x )	//path compression
	{
		parent[x] = find(parent[x]) ;
	}
	return parent[x];
}
void merge(ll x, ll y)
{
	ll xroot = find(x);
	ll yroot = find(y);
 
    if(xroot == yroot) return;
 
	if( urank[xroot] <= urank[yroot] )	// Union by rank
	{
		parent[xroot] = yroot ;
		urank[yroot] = urank[yroot] + urank[xroot] ;
	}
	else
	{
		parent[yroot] = xroot;
		urank[xroot] = urank[xroot] + urank[yroot] ;
	}
}
 
 
int main()
{
    fast_cin
    int n;
    cin >> n;
    for(int i=1;i<=n;i++){
        create(i);
    }
    int u;
    for(int i=1;i<=n;i++){
        cin >> u;
        merge(i,u);
    }
    set<int> s;
    for(int i=1;i<=n;i++){
        s.insert(find(i));
    }
    int ans=s.size();
    cout << ans << endl;
}
