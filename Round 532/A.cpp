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
int n,k;
vi v(200);

int solve(int b, vi v)
{

  int a1=b;
  int a2=b;
  while(a1>=1){
    if(a1<1) break;
    v[a1]=0;
    a1-=k;
  }
  while(a2<=n){
    if(a2>n) break;
    v[a2]=0;
    a2+=k;
  }
  int soc=0;
  int oth=0;
  for(int i=1;i<=n;i++){
    soc+=(v[i]>0);
    oth+=(v[i]<0);
  }
  return abs(soc-oth);
}

int main()
{
  cin >> n >> k;
  for(int i=1;i<=n;i++) cin >> v[i];
  int ans=0;
  for(int b=1;b<=n;b++){
    ans=max(ans,solve(b,v));
  }
  cout <<ans<<endl;
}
