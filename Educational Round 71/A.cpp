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
 
 
int main()
{
	//freopen("in.txt","r",stdin);
	int T;
	cin >> T;
	for(int tc=1;tc<=T;tc++)
	{
	  	int b,p,f,h,c;
		cin >> b >> p >> f >> h >> c;
		int B=b,P=p,F=f,H=h,C=c;
 
		ll cash1=0;
		ll cash2=0;
		if(c>h){
			while(1){
				if(f<1 || b<2) break;
				b-=2;
				f--;
				cash1+=c;//sell chicken
			}
			while(1){
				if(p<1 || b<2) break;
				b-=2;
				p--;
				cash1+=h;
			}
		}
		if(H>=C){
			while(1){
				if(P<1 || B<2) break;
				B-=2;
				P--;
				cash2+=H;
			}
			while(1){
				if(F<1 || B<2) break;
				B-=2;
				F--;
				cash2+=C;
			}
		}
 
		cout << max(cash1,cash2) << endl;
 
	}
}
