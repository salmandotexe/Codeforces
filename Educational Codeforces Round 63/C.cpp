#include <bits/stdc++.h>
#define ll long long int
#define vi vector<int>
#define vll vector<ll>
#define vvi vector < vi >
#define pii pair<int,int>
#define pll pair<long long, long long>
#define mod 1000000007
#define inf 1000000000000000001;
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
  fast_cin
  ll n,m;
  cin >> n >> m;
  vll v(n),a(m);


  for(int i=0;i<n;i++) cin >> v[i];

  ll AAA=*min_element(all(v));

  for(int i=0;i<m;i++) cin >> a[i];

  ll d=v[0];
  vll G;
  for(int i=0;i<n-1;i++){
    G.pb(v[i+1]-v[i]);
  }

  ll g=0;
  for(auto a:G)
    g=__gcd(g,a);

  bool can=0;
  ll ind=-1;
  for(int i=0;i<m;i++){
    if(g%a[i]==0){
      cout <<"YES\n";
      ind=i+1;
      can=1;
      break;
    }
  }
  if(!can){
    cout <<"NO\n";
    exit(0);
  }
  else
  {
    cout << AAA <<" "<< ind <<endl;
    exit(0);
  }
}
