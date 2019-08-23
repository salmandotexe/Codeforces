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
 
const int maxn=60;
int A[maxn][maxn],B[maxn][maxn],O[maxn][maxn];
int main()
{
	//freopen("in.txt","r",stdin);
    fast_cin
	int n,m;
	cin >> n >> m;
	for(int i=1;i<=n;i++)for(int j=1;j<=m;j++){
		 cin >> A[i][j];
		 O[i][j]=A[i][j];
	}
 
	auto get=[&](int i, int j){
		int cnt= A[i][j] + A[i+1][j] + A[i][j+1] +A[i+1][j+1];
		return (cnt==4);
	};
	auto fix=[&](int i, int j){
		B[i][j]=1;
		B[i+1][j]=1;
		B[i][j+1]=1;
		B[i+1][j+1]=1;
	};
	vector<pii> steps;
	for(int i=1;i<=n;i++) for(int j=1;j<=m;j++){
		if(i+1>n || j+1>m) continue;//next row or col out of bound
		if(get(i,j))
		{
			fix(i,j);
			steps.pb(mp(i,j));
			A[i][j]=0;
		}
	}
 
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(B[i][j]!=O[i][j]){
				cout << -1 << endl;
				exit(0);
			}
		}
	}
	int ns=steps.size();
	cout << ns << endl;
	for(auto a:steps){
		cout << a.f <<" "<< a.s << endl;
	}
}
