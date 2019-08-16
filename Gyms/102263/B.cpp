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

//ostream& operator << (ostream &out, vector<int> &v) { for(auto a:v) out << a<<" "; out<<endl; }

int k;
// int f(int val, int idx)	//returns who loses.
// {
// 	cout <<"idx: "<<idx<<" : val: "<<val <<endl;
// 	if(val==0) return idx;
// 	int x1=1;
// 	int x2=max(val-k,1);
//
// 	for(int x=x2;x>x1;x--)
// 	{
// 		if(val-x<0) continue;
// 		if(f(val-x,!idx)!=idx)
// 		{
// 			return f(val-x,!idx);
// 		}
// 	}
// 	return f(val-1,!idx);
// }

int main()
{
    int T;
    cin >> T;
    for(int tc=1;tc<=T;tc++)
    {
      	ll n,k;
		cin >> n >> k;
		cout << (!(n%2 || n-k>=2)?"Ayoub\n":"Kilani\n");
    }
}
