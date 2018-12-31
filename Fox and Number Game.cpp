#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n;
  cin >>n;
  vector<int> v(n);
  for(int i=0;i<n;i++) cin >> v[i];
  int g=v[0];
  for(int i=1;i<n;i++)
    g=__gcd(g,v[i]);
  cout << g*n<<endl;
}
