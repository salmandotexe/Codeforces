#include <bits/stdc++.h>

using namespace std;

int main()
{
  string s;
  cin >> s;
  for(int i=0;i<s.size();i++)
  {
    if(i==0 &&s[i]=='9')
      continue;
    if((int)(s[i]-'0')>=5)
      s[i]=char('0'+(9-(int)(s[i]-'0')));
  }
  cout << s <<endl;
}
