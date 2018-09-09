#include <bits/stdc++.h>
//WA on Test 7.
//probably better way to do this is to precompute and store results
using namespace std;
typedef long long ll;

pair<ll,ll> intersect(multiset<pair<ll,pair<ll,ll>> > &s)
{
  ll r=INT_MAX;
  ll l=-1;
  for(auto a:s)
  {
    l=max(a.second.first,l);
    r=min(a.second.second,r);
  }
  pair<ll,ll> p=make_pair(l,r);
  return p;
}

int main()
{
  int n;
  ll a,b;
  cin >> n;
  multiset<pair<ll,pair<ll,ll>> > s;
  while(n--)
  {
    cin >> a >> b;
    s.insert(make_pair(b-a, make_pair(a,b)));
  }
  s.erase(s.begin());
  pair<ll,ll> p =intersect(s);
  if(p.first<=p.second)
    cout << p.second-p.first<<endl;
  else
    cout << 0<<endl;
}
