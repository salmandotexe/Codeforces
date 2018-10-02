#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
int main()
{
  int n;
  string s;
  cin >> n;
  getchar();
  while(n--)
  {
    getline(cin,s);
    int N=s.size();
    if(s.size()==1)
    {
      cout << 1<<endl;
      continue;
    }
    s.erase(s.begin());
    s.erase(s.begin());
    
    int a=stoi(s);
    int x=1;
    for(int i=1;i<=s.size();i++)
      x*=10;
    cout << x/__gcd(x,a)<<endl;
  }
}
