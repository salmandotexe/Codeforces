#include <bits/stdc++.h>
using namespace std;
//WA on test 55
string contains(string s1, string s2)
{
  if(s1.size()==0)
    return "YES";
  if(s1.size()>s2.size())
    return "NO";

  int last=0;
  int found=0;
  for(auto c:s1)
  {
    found=0;
    for(int j=last;j<s2.size();j++)
    {
      last=j;
      if(c==s2[j])
      {
        found=1;
        break;
      }
      if(j==s2.size()-1 && found==0)
        return "NO";
    }
  }
  if(last!=s2.size()-1)
    return "NO";
  if(found==1)
    return "YES";
  else
    return "NO";
}
int main()
{
  int n,m;
  string s,t;
  cin >> n >> m >> s >> t;
  string s1="",s2="",stres="";
  int f=0;
  for(int i=0;i<n;i++)
  {
    if(s[i]!='*')
      if(!f)
        s1+=s[i];
      else
        s2+=s[i];
    else
    {
      f=1;
      continue;
    }
  }
  stres=string(s1+s2);
  cout << contains(stres,t)<<endl;

}
