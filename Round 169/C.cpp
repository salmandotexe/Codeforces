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
 
const int maxn=2e5+5;
ll V[maxn];
int main()
{
	fast_cin
    int n,q;
    cin >> n >> q;
    vll a(n);
    for(int i=0;i<n;i++) cin >> a[i];
	sort(all(a));
	while(q--){
		int u,v;
		cin >> u >> v;
		V[u]++;
		V[v+1]--;
	}
	ll cum=0;
	for(int i=0;i<maxn;i++){
		cum+=V[i];
		V[i]=cum;
	}
 
	vector<pll> todo(n);
	for(int i=1;i<=n;i++) {
		todo[i-1].f=V[i];
		todo[i-1].s=i-1;
	}
 
	sort(all(todo));
	vi ans(n);
	ll res=0;
	for(int i=todo.size()-1;i>=0;i--){
		res+= todo[i].f * a[i];
	}
	cout << res << endl;
 
}
