#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n,x;
  int c=1;
  map<int,int> m;
  cin >> n;
  for(int i=1;i<=n;i++)
  {
    cin >> x;
    m[x]=i;
  }
  vector<int> v(n+1);
  for(int i=1;i<=n;i++)
    cin >> v[i];
  int mx=0;
  for(int i=1;i<=n;i++)
  {
    if(m[v[i]]<=mx)
      cout << 0 <<" ";
    else
      cout << m[v[i]]-mx<< " ";
    mx=max(mx,m[v[i]]);
  }
  cout <<endl;
}
