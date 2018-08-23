#include <bits/stdc++.h>

using namespace std;

bool islegal(string s, string t, int n,int m)
{

  int index=-1;
  if(n-m>1)
    return false;
  for(int i=0;i<n;i++)
  {
    if(s[i]==t[i])
      continue;
    else
      if(s[i]=='*')
      {
        index=i;
        break;
      }
      else
        return false;
  }
  if(index==n-1)
    return true;//last character * all other same
  if(index>=0)
  {
    index++;
    int c=index;
    for(int i=0;i<t.size();i++)
    {
      if(t[i]!=s[c++])
        c=index;
      else
        if(c==s.size())
          return true;
      if(i==t.size()-1)
        return false;
    }

  }

}
int main()
{
  int n,m;
  string s,t;
  cin >> n>> m;
  cin >> s >> t;
  if(islegal(s,t,n,m))
    cout << "YES\n";
  else
    cout << "NO\n";

}
