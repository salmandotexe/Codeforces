//WA on test 26
#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

int main()
{
  int n,x,g;
  cin >> n;

  vi v;
  cin >> x;
  g=x;
  v.push_back(x);n--;
  while(n--)
  {
    cin >> x;
    v.push_back(x);
    g=__gcd(g,x);
  }
  for(auto a:v)
    if(a==g)
    {
      cout << a<<endl;
      return 0;
    }
  cout << -1 << endl;

}
