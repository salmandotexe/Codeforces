#include <bits/stdc++.h>
using namespace std;
//WA on Test 87
bool contains(string s1,string s2, string s)
{
  if(s1.size()==0)
    return 1;
  if(s1.size()+s2.size()>s.size())
    return 0;

  int last=0;
  int found=0;

  for(int i=0;i<s1.size();i++)
  {
    if(s1[i]!=s[i])
      return 0;
  }
  int N=s.size()-1;

  for(int i=s2.size()-1;i>=0;i--)
  {
    if(s2[i]!=s[N--])
      return 0;
  }
  return 1;
}
int main()
{
  int n,m;
  string s,t;
  cin >> n >> m >> s >> t;
  string s1="",s2="",stres="";
  int f=0;
  if(n>m+1)
  {
    cout << "NO\n";return 0;
  }
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
  cout << (contains(s1,s2,t)?"YES":"NO")<<endl;
  //why is it stuck running on test 1

}
