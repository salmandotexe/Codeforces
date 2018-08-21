#include <bits/stdc++.h>
//Solution to: https://codeforces.com/contest/1027/problem/B
using namespace std;
typedef long long ll;

ll f(ll x, ll y, ll n)
{
  ll r=(n*(x-1)+(y));
  return r;
}
int main()
{
  ll n,q,x,y;
  cin >> n >> q;
  while(q--)
  {
    ll limitx= (n*n+1)/2; //ceil
    cin >> x >> y;
    ll res=f(x,y,n);
    ll ans = (res+1)/2; //ceil
    if((x+y)&1)
      cout << ans+limitx<<endl;
    else
      cout << ans<<endl;
  }

}
