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
	//freopen("in.txt","r",stdin);
	fast_cin
    int T;
    cin >> T;
 
    for(int tc=1;tc<=T;tc++)
    {
		ll n,m;
		cin >> n >> m;
		vll a(12);
		ll cur=m;
		for(int i=0;i<10;i++){
			a[i]=cur%10;
			cur+=m;
			cur%=10;
		}
 
		ll cum=accumulate(all(a),0LL);
		ll fac=(n/m)/10;
		ll rem=(n/m)%10;
		ll res=cum*fac;
		for(int i=0;i<rem;i++){
			res+=a[i];
		}
		cout << res << endl;
    }
}