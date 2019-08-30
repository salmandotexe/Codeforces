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
      	int n;
      	cin >> n;
      	vi v(n);
      	for(int i=0;i<n;i++) cin >> v[i];
		int mn= v[n-1];
		int bad=0;
      	for(int i=n-1;i>=0;i--){
			if(v[i]>mn) bad++;
			mn=min(v[i],mn);
		}
		cout << bad << endl;
    }
}
