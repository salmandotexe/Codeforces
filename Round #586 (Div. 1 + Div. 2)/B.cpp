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
 
const int maxn=1005;
ll G[maxn][maxn];
 
int main()
{
 
	fast_cin
    ll n;
	cin >> n;
	ll GG=0;
	for(ll i=0;i<n;i++){
		for(ll j=0;j<n;j++) {
			cin >> G[i][j];
		}
	}
	vll ans(n);
	for(int i=0;i<n;i++){
		ans[i]=(G[i][(i+1)%n] * G[i][(i+2)%n])/ G[(i+1)%n][(i+2)%n];
	}
	for(auto &a:ans){
		ll b=floor(sqrt(a));
		b--;
		while(b*b!=a){
			b++;
		}
		a=b;
	}
	OUT(ans);
}
