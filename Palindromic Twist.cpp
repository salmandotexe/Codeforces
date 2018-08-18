#include <bits/stdc++.h>

using namespace std;

bool islegalpal(string s)
{
  int n=s.size();
  for(int i=0;i<n;i++)
  {
    int a=abs(int(s[i]-s[n-i-1]));
    if(a==0)
      continue;
    if(a==2)
      continue;
    return false;
  }
  return true;
}
int main()
{
  int t;
  cin >> t;
  while(t--)
  {
    int n;
    cin >> n;
    string s;
    cin >> s;
    if(islegalpal(s))
      cout << "YES";
    else
      cout << "NO";
    cout << endl;
  }
}
