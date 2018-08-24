#include <bits/stdc++.h>
//i hate you so much, this took 13 attempts so far.
using namespace std;

int fu(string s1, string s2, string t)
{
  if(t.size()<s1.size()+s2.size())
    return 0;

  int c=0;
  for(auto a:s1)
    if(a!=t[c++])
      return 0;
  c=t.size()-s2.size();
  for(auto a:s2)
    if(a!=t[c++])
      return 0;
  return 1;
}

int main()
{
  int n,m;
  string t;
  string s;
  cin >> n >> m >> s >> t;
  string s1="",s2="";

  int f=0;
  for(auto a:s)
  {
    if(a=='*')
    {
      f=1;
      continue;
    }
    if(f==0)
      s1+=a;
    else
      s2+=a;
  }
  if(f==0)
  {
    cout << (s==t?"YES\n":"NO\n")<<endl;
    return 0;
  }
  if(fu(s1,s2,t))
    cout << "YES\n";
  else
    cout << "NO\n";
}
