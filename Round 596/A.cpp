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
    ll a,b;
	cin >> a >> b;
	if(a==9 && b==1){
		cout <<"9 10\n";
		return 0;
	}
 
	if(abs(a-b)>1){
		cout << -1 << endl;
	}
	else{
		if(a>b){
			cout << -1 << endl;
		}
		else{
 
			if(a==b){
				cout << a*100 <<" "<< b*100+1<<endl;
			}
			else{
				cout << a<<"9999 "<< b<<"0000\n";
			}
		}
	}
 
}
