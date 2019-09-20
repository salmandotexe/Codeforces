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

int freq[1000];
int main()
{
	fast_cin
	int n;
	string s;
	cin >> n >> s;
	for(auto a:s){
		freq[a]++;
	}
	int one=1e6,zero=1e6;
	one=min({freq['o'],freq['n'],freq['e']});

	freq['o']-=one;
	freq['n']-=one;
	freq['e']-=one;

	zero =min({freq['z'],freq['e'],freq['r'],freq['o']});
	for(int i=1;i<=one;i++) cout << 1 <<" ";
	if(zero<0) zero=0;
	for(int i=1;i<=zero;i++) cout << 0 <<" ";
	cout << endl;
}
