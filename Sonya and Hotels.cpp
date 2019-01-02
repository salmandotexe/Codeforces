#include <bits/stdc++.h>
#define ll long long
#define vi vector<ll>

using namespace std;
ostream& operator << (ostream &out, vector<int> &v)
{
  for(auto a:v)
    out << a<<" ";
  out<<endl;
}

int main()
{
  ll n,d;
  cin >> n>>d;
  vi v(n);
  for(int i=0;i<n;i++) cin >> v[i];

  int res=0;

  sort(v.begin(),v.end());
  set<ll> s;
  s.insert(*v.begin()-d);
  s.insert(*v.rbegin()+d);
  for(int i=0;i<n-1;i++)
    if(v[i]+2*d<=v[i+1])
      s.insert(v[i]+d);
  for(int i=1;i<n;i++)
    if(v[i]-2*d>=v[i-1])
      s.insert(v[i]-d);
  cout << s.size()<<endl;
}
