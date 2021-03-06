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

ostream& operator << (ostream &out, vector<ll> &v) { for(auto a:v) out << a<<" "; out<<endl; }

int main()
{
  fast_cin
  string s;
  cin >> s;

  int m;
  cin >> m;
  vll a(m);
  for(int i=0;i<m;i++) cin >> a[i];

  int n=s.size();
  vll dp(n+3,0LL);

  for(int i=1;i<=m;i++)
  {
    int u=a[i-1];
    int v=n-u + 1;
    dp[u]+=1;
    dp[v+1]-=1;
  }
  ll cum=0;
  for(int i=0;i<=n;i++)
  {
    cum+=dp[i];
    dp[i]=cum;
  }
  //cout << dp;
  string res="-";
  res+=s;
  for(int i=1;i<=n/2;i++) {
    if(dp[i]%2==1){
      swap(res[i],res[n-i+1]);
    }
  }
  cout<<res.substr(1,n)<<endl;

}
