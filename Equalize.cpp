#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n;
  string s1,s2;
  cin >> n;
  cin >> s1 >> s2;
  int c=0;

  for(int i=0;i<s1.size();i++)
  {
    if(s1[i]==s2[i])
      continue;
    else
    {
      if(i!=n-1 && s1[i]==s2[i+1] && s2[i]==s1[i+1])
      {
        swap(s1[i+1],s1[i]);
        c++;
        continue;
      }
      else
        if(s1[i]!=s2[i])
        {
          s1[i]=s2[i];
          c++;
        }
    }
  }
  cout << c<<endl;

}
