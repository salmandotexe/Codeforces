#include <bits/stdc++.h>
//WA on Test 6
using namespace std;

int main()
{
  int n,k;
  string t;
  cin >> n >> k >>t;
  string s="";
  if(t[0]==t[n-1] && t.size()!=1)
    for(int i=0;i<n-1;i++)
      s+=t[i];
  else
    s=t;
  for(int i=0;i<k;i++)
    cout << s;
  if(t[0]==t[n-1]&& t.size()!=1)
    cout << t[0];
  cout << endl;
}
