#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;

ll gcd(ll  a, ll b)
{
    if (a == 0)
        return b;
    return gcd(b%a,a);
}
int main()
{
  ll l,r;
  cin >> l >> r;
  if(l==r)
    return cout <<"NO\n",0;
  cout <<"YES\n";
  for(ll i=l;i<=r-1;i+=2)
    cout << i << " "<<i+1<<endl;
}
