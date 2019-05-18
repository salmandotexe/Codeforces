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

ostream& operator << (ostream &out, vector<int> &v) { for(auto a:v) out << a<<" "; out<<endl; }

// Disjoint Set DataStructure
const int maxn=5e5+5;

int parent[maxn];
int urank[maxn];

void create(ll x)
{
	parent[x] = x ;
	urank[x] = 1 ; 		// rank = no. of nodes in its subtree
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
    if(xroot==yroot) return;    //note: ignore if same parent ( already belongs to same group. this line is not present in the actual library )
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
    //https://codeforces.com/contest/1167/problem/C
    fast_cin

    int n,m;
    cin >> n >> m;
    for(int i=1;i<=n;i++) create(i);
    for(int i=0;i<m;i++)
    {
        int k;
        cin >> k;
        vi v_;
        for(int u=0;u<k;u++)
        {
            int x;
            cin >> x;
            v_.pb(x);
        }
        for(int a=0;a+1<v_.size();a++)
        {
            merge(v_[a],v_[a+1]);
        }
    }
    for(int i=1;i<=n;i++) cout << urank[find(i)]<<" ";
    cout << endl;
}
