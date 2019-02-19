#include <bits/stdc++.h>
#define ll long long int
#define vi vector<int>
#define vll vector<ll>
#define vvi vector < vi >
#define pii pair<int,int>
#define pll pair<long long, long long>
#define mod 1000000007
#define inf 100000000+5
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
  int n;
  cin >> n;
  vi v(n),dp(n,1);

  for(int i=0;i<n;i++)
  {
    cin >> v[i];
    if(i>0)
      if(v[i]==v[i-1]) dp[i]=dp[i-1]+1;
  }
  int a=*max_element(all(v));

  int maxl=0;
  for(int i=1;i<n;i++)
  {
    if(v[i]==a)
      maxl=max(maxl,dp[i]);
  }
  if(maxl==0)
    cout << 1<<endl;
  else cout << maxl<<endl;

}
