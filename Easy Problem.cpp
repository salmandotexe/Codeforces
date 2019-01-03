#include <bits/stdc++.h>
#define vi vector<int>
#define ll long long
#define inf 1e18

using namespace std;

int main()
{
  int n;
  cin >> n;

  string s;
  cin >> s;

  vi a(n);
  ll dp[n+1][5];
  for(int i=0;i<n+1;i++) for(int j=0;j<5;j++) dp[i][j]=inf;

  for(int i=0;i<n;i++) cin >> a[i];
  string hard="hard";
  dp[0][0]=0LL;
  for(int i=0;i<n;i++) for(int j=0;j<4;j++)
  {
    dp[i + 1][j + (s[i] == hard[j])] = min(dp[i + 1][j + (s[i] == hard[j])], dp[i][j]);
		dp[i + 1][j] = min(dp[i + 1][j], dp[i][j] + a[i]);
  }
  cout << *min_element(dp[n],dp[n]+4)<<endl;
}
