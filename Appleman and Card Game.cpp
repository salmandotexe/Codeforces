#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
ll fn(string s,ll n)
{
  unordered_map<char,ll> m;
  for(ll i=0;i<n;i++)
    m[s[i]]++;
  ll res=0;
  for(auto a:m)
    res+=(a.second*a.second);
  return res;
}

int main()
{
  ll n,k;
  string s1;
  cin >> n >>k;
  cin >> s1;
  map<char,ll> m;
  multiset<pair<ll,char>> s;

  for(auto a:s1)
    m[a]++;

  for(auto a:m)
    s.insert(make_pair(a.second,a.first));

  string s2="";
  for(auto i=s.rbegin();i!=s.rend();i++)
  {
    ll n=i->first;
    char c=i->second;
    for(ll j=0;j<n;j++)
      s2+=c;
  }
  cout << fn(s2,k)<<endl;

}
