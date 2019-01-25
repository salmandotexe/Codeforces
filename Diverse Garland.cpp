#include <bits/stdc++.h>

using namespace std;

vector<char> v={'R','G','B'};
char choose(char a, char b)
{
  if(b=='x')
  {
    if(a=='R')
      return 'B';
    if(a=='B' || a=='G')
      return 'R';
  }
  for(auto c:v) if (a!=c && b!=c) return c;

}
int main()
{
  int n;
  cin >> n;
  string s;cin >> s;
  int res=0;
  for(int i=1;i<n;i++)
  {
    if(s[i-1]==s[i])
    {
      res++;
      s[i]=choose(s[i],i+1<n?s[i+1]:'x');
    }
  }
  cout <<res<<endl<<s<<endl;
}
