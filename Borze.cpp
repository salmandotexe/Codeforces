#include <bits/stdc++.h>
using namespace std;

int main()
{
  string s;
  cin >> s;
  string res="";
  for(int i=0;i<s.size();i++)
  {
    if(s[i]=='-' && s[i+1]=='.')
    { res+='1'; i++; }
    else if(s[i]=='-' && s[i+1]=='-')
    { res+='2';i++; }
    else res+='0';
  }
  cout << res<<endl;
}
