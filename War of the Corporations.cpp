#include <bits/stdc++.h>

using namespace std;

int main()
{
  string s,t;
  cin >> s >>t;
  int res=0;
  //Naive SMA
  for(int i=0;i<s.size();i++)
  {
    for(int j=0;j<t.size();j++)
    {
      if(i+j==s.size()||s[i+j]!=t[j])
        break;
      if(j==t.size()-1)
      {
        res++;
        i=i+j;
      }
    }
  }
  cout << res << endl;
}
