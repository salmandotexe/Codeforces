#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n,m,u,v;
  cin >> n >> m;
  while(m--)
    cin >> u >> v;
  for(int i=0;i<n;i++)
    cout << (i&1?1:0);
  cout << endl;
}
