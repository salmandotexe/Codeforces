#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

ll step(ll a, ll b)
{
  return a>b?(a-b):(a+b);
}
int main()
{
  long long n,k,s;
  ll b=1;
  cin >> n >> k >> s;
  if(k*(n-1)<s || k>s)
    cout << "NO\n";
  else
  {
    cout << "YES\n";
    while(k>0)
    {
      ll a=min(n-1,s-(k-1));
      b=step(b,a);
      cout << b << " ";
      s-=a;
      k--;
    }
  }
}
