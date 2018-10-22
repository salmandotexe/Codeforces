#include <bits/stdc++.h>

using namespace std;

int arr[1001][1001];
int dp[1001][1001];


void bfs(int i,int j)
{
  if(i-1>=0)
  {
    if(dp[i-1][j]==-10000)
      dp[i-1][j]= dp[i][j]+arr[i-1][j];
    else
    dp[i-1][j]=max(dp[i][j]+arr[i-1][j],dp[i-1][j]);
  }
  if(j-1>=0)
  {
    if(dp[i][j-1]==-10000)
      dp[i][j-1]= dp[i][j]+arr[i][j-1];
    else
      dp[i][j-1]=max(dp[i][j]+arr[i][j-1],dp[i][j-1]);
  }
  if(i!=0)
    bfs(i-1,j);
  if(j!=0)
    bfs(i,j-1);
}
int main()
{
  int t;
  cin >>t;
  for(int T=1;T<=t;T++)
  {
    int n,m;
    cin >> n >> m;
    memset(dp, -10000, sizeof(dp[0][0]) * 1000 * 1000);
    for(int i=0;i<n;i++) for(int j=0;j<m;j++) scanf("%d", &arr[i][j]);
    dp[n-1][m-1]=arr[n-1][m-1];
    bfs(n-1,m-1);
    printf("Case %d: %d\n", T,dp[0][0]);
  }
}
