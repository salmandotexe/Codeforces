#include <bits/stdc++.h>
#define ll long long int
#define vi vector<int>
#define vll vector<ll>
#define vvi vector < vi >
#define pii pair<int,int>
#define pll pair<long long, long long>
#define mod 1000000007
#define inf INT_MAX
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

ll dp[105][5];

int main()
{
  //cout << inf;
  int n;
  cin >> n;
  vi v(n);
  for(int i=0;i<=n+2;i++){
    for(int j=0;j<=4;j++) dp[i][j]=inf;
  }
  for(int i=1;i<=n;i++) cin >> v[i];

  ///dp[idx][st] = min number of rest days if I do st on day idx.
  for(int i=1;i<=n;i++)
  {
    for(int j=0;j<=2;j++)
    {
      if(i==1)
      {
        dp[i][0]=1;
        dp[i][1]=(v[i]==1 || v[i]==3)?0:inf;
        dp[i][2]=(v[i]==2 || v[i]==3)?0:inf;
        break;
      }
      dp[i][0]=min({dp[i-1][0],dp[i-1][1],dp[i-1][2]}) +1;
      if(v[i]==1 || v[i]==3)
      {
        dp[i][1]=min(dp[i-1][0],dp[i-1][2]);
      }
      if(v[i]==2 || v[i]==3)
      {
        dp[i][2]=min(dp[i-1][0],dp[i-1][1]);
      }
    }

  }
  cout << *min_element(dp[n],dp[n]+3)<<endl;
}
