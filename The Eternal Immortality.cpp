//Solution to: https://codeforces.com/contest/869/problem/B
//fixed typo
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;


int main()
{
  long long n,m;
  cin >> n >> m;
  if(m-n>=5)
    cout << 0;
  else
  {
    ll res=1;
    for(ll i=n+1;i<=m;i++)
      res*=i%10;
    res%=10;
    cout << res<<endl;
  }
}
