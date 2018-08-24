#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
  ll a,L,d;
  cin >> a >> L >> d;
  if(d==0)
  {
    if(a==L)
      cout << "YES\n";
    else
      cout << "NO\n";
    return 0;
  }
  ll n=((L-a)/d) +1;
  if(n<1)
  {
    cout << "NO\n";
    return 0;
  }
  if(a+(n-1)*d!=L)
    cout << "NO\n";
  else
    cout << "YES\n";
}
