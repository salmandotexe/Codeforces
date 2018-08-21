#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

ll f(ll x, ll y, ll n)
{
  ll r=(n*(y-1)+(x+1));
  return ceil(r/2);
}
int main()
{
  ll n,q,x,y;
  cin >> n >> q;
  while(q--)
  {
    ll limitx=ceil((n*n)/2);
    cin >> y >> x;
    ll res=f(x,y,n);
    if((x+y)&1)
      cout << limitx+res +(n&1) <<endl;
    else
      cout << res << endl;
  }

}
