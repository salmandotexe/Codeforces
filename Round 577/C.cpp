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
 
int main()
{
	fast_cin
 
	//freopen("in.txt","r",stdin);
    ll n,k;
    cin >> n >>k;
    vll v(n);
    for(int i=0;i<n;i++) cin >> v[i];
    sort(all(v));
	//cout << v[n/2] << endl;
	ll lo=v[n/2];
	ll hi=v[n/2]+k+1;
	auto ok=[&](ll el)
	{
		ll res=0;
		for(int i=n/2;i<n;i++){
			if(el>v[i]) res+= (el-v[i]);
		}
		return res<=k;
	};
	while(hi-lo>1){
		//cout << lo <<" : "<< hi << endl;
		ll mid=lo+(hi-lo)/2;
		if(ok(mid))
			lo=mid;
		else hi=mid-1;
	}
	ll ans;
	if(ok(hi)) ans=hi;
	else ans=lo;
	cout << ans << endl;
}
