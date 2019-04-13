#include <bits/stdc++.h>
#define ll long long int
#define vi vector<int>
#define vll vector<ll>
#define vvi vector < vi >
#define pii pair<int,int>
#define pll pair<long long, long long>
#define mod 1000000007
#define inf (int)1e9+1;
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

ostream& operator << (ostream &out, vector<int> &v) { for(auto a:v) out << a<<" "; out<<endl; }

int main()
{
  ll n,t;
  cin >> n >> t;


  ll a,d;
  ll mx=inf;
  ll ans=-1;
  for(int i=0;i<n;i++)
  {
    cin >> a >> d;
    if(a>=t){
      if(a<mx){
        mx=a;
        ans=i;
      }
    }
    else{
      ll fac=ceil((t-a)/double(d));
      ll time=fac*d+a;
      if(time<mx){
        mx=time;
        ans=i;
      }
    }
  }
  cout << ans+1<<endl;


}
