#include <bits/stdc++.h>
#define inf int(2e9)
using namespace std;

int dp[105][3];
int main()
{
  int n;
  cin >> n;
  for(int i=0;i<105;i++)for(int j=0;j<3;j++) dp[i][j]=inf;
  vector<int> v(n+1);
  for(int i=1;i<=n;i++) cin >> v[i];

  dp[1][0]=1; //can rest on day 1 regardless of value.
  if(v[1]==1 || v[1]==3)
    dp[1][1]=0;
  if(v[1]== 2|| v[1]==3)
    dp[1][2]=0;
  for(int i=2;i<=n;i++)
  {
    dp[i][0]=1+min(min(dp[i-1][0],dp[i-1][1]),dp[i-1][2]);
    if(v[i]==1 || v[i]==3)
      dp[i][1]=min(dp[i-1][0],dp[i-1][2]);
    if(v[i]==2 ||v[i]==3)
      dp[i][2]=min(dp[i-1][0],dp[i-1][1]);
  }
  cout << *min_element(dp[n],dp[n]+3)<<endl;
}
