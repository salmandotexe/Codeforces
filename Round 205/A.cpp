#include <bits/stdc++.h>
#define ll long long int
#define vi vector<int>
#define vll vector<ll>
#define vvi vector < vi >
#define pii pair<int,int>
#define pll pair<long long, long long>
#define mod 1000000007
#define inf 10000000
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
 
 
int v[102];
int w[102];
int dp[102][600][600];
int n;
int f(int i, int up, int lo){
	if(i>n)
		return (up%2==0 & lo%2==0)?0:inf;
	if(dp[i][up][lo]!=-1) return dp[i][up][lo];
	return dp[i][up][lo]= min(f(i+1,up+v[i],lo+w[i]),1+f(i+1,up+w[i],lo+v[i]));
}
int main()
{
	mem(dp,-1);
	fast_cin;
	cin >> n;
	for(int i =1; i <=n; i++) cin >> v[i] >> w[i];
	auto ans=f(0,0,0);
	cout << (ans>=inf?-1:ans)<<endl;
}
