#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define vi vector<int>
using namespace std;

ostream& operator << (ostream &out, vector<int> &v)
{
  for(auto a:v)
    out << a;
  out<<endl;
}

bool ispal(string s)
{
  for(int i=0;i<=s.size()/2;i++)
  {
    if(s[i]!=s[s.size()-1-i])
      return false;
  }
  return true;
}
int main()
{
  int t;
  string s;
  cin >> t;
  while(t--)
  {
    cin >> s;
    if(!ispal(s))
    {
      cout << s <<endl;
      continue;
    }
    sort(s.begin(),s.end());
    
    if(ispal(s))
      cout <<-1 <<endl;
    else
      cout << s <<endl;
  }

}
