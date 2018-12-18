#include <bits/stdc++.h>
using namespace std;

int main()
{
  string s;
  cin >> s;
  cout << ((((s[s.size()-2]-'0')*10+(s[s.size()-1]-'0'))%4)==0?"4\n":"0\n");
}
