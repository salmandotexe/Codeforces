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
#define OK cout << "@===================ok===================@" <<endl;
#define WTF cout <<"< "<<lo<<" | "<< hi <<" >" << endl;
 
using namespace std;
 
int main()
{
	fast_cin
    int T;
    cin >> T;
    for(int tc=1;tc<=T;tc++)
    {
      	int n,k,d;
		cin >> n >> k >> d;
		vi v(n);
		int mx=n;
		for(int i=0;i<n;i++) cin >> v[i];
		for(int i=0;i<n;i++){
			set<int> s;
			for(int j=i;j<n;j++){
				if(j-i+1>d) break;
				s.insert(v[j]);
				if(j-i+1==d){
					mx=min(mx,(int)s.size());
				}
			}
		}
		cout << mx << endl;
 
    }
}
