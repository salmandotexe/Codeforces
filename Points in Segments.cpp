#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n,m,a,b;
  map<int,int> M;
  cin >> n >> m;
  for(int i=1;i<=m;i++)
    M[i]=2;
  while(n--)
  {
    cin >> a >> b;
    for(int i=a;i<=b;i++)
      M[i]=1;
  }
  set<int> s;
  for(auto c:M)
    if(c.second==2)
      s.insert(c.first);
  cout << s.size()<<endl;
  for(auto a:s)
    cout << a << " ";
}
