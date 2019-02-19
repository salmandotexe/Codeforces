#include <bits/stdc++.h>
#define ll unsigned long long
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
  int n,m,k;

  cin >> n >> m >> k;
  vi v(n);
  for(int i=0;i<n;i++) cin >> v[i];

  sort(all(v)); reverse(all(v));

  ll times=m/(k+1);

  ll res=0;
  ll a=k;
  a*=v[0];
  a+=v[1];
  res+=(a)*times;
  times=m%(k+1);
  res+=v[0]*times;
  cout<<res<<endl;

}
