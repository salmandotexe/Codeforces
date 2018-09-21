#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;


int main()
{
  int t;
  cin >> t;
  string s,s1;
  while(t--)
  {
    cin >> s1;
    string s=s1+'-'+'-';
    int num=0,small=0,cap=0;
    for(int i=0;i<s.size();i++)
    {
      char a=s[i];
      if(isdigit(a))
        num=i+1;
      if(islower(a))
        small=i+1;
      if(isupper(a))
        cap=i+1;
    }
    if(num==0)
    {
      for(int i=0;i<s.size();i++)
      {
        if(i!=small-1)
          if(i!=cap-1)
            {s[i]='1'; num=i+1;break;}
      }
    }
    if(small==0)
    {
      for(int i=0;i<s.size();i++)
      {
        if(i!=num-1)
          if(i!=cap-1)
            {s[i]='a';small=i+1;break;}
      }
    }
    if(cap==0)
    {
      for(int i=0;i<s.size();i++)
      {
        if(i!=small-1)
          if(i!=num-1)
            {s[i]='A';cap=i+1;break;}
      }
    }
    if(s[s.size()-1]=='-')
      s.erase(--s.end());
    if(s[s.size()-1]=='-')
      s.erase(--s.end());
    cout << s <<endl;
  }

}
