#include <bits/stdc++.h>
#define vi vector<int>
#define ll long long
using namespace std;
 
int visited[int(1e5)+2];
int dp[int(1e5)+2];
ll res=0;
int main()
{
  int n;
  cin >> n;
  vi v(n);
  for(int i=0;i<n;i++)
    cin >> v[i];
 
  set<int> s;
  for(int i=n-1;i>=0;i--)
  {
    dp[i]=s.size();
    s.insert(v[i]);
  }
 
  for(int i=0;i<n;i++)
  {
    if(!visited[v[i]])
    {
      visited[v[i]]=1;
      res+=dp[i];
    }
  }
  cout << res<<endl;
 
}
