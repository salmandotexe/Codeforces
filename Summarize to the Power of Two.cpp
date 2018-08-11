#include <bits/stdc++.h>

using namespace std;
int main()
{
  int n;
  cin >> n;
  vector<int> v(n);
  map<int,int> m;
  int x;
  for(int i=0;i<n;i++)
  {
    cin >> x;
    v[i]=x;
    m[x]++;
  }
  set<int> s;

  unsigned int res=1;
  s.insert(1);

  for(int i=1;i<=30;i++)
  {
    res*=2;
    s.insert(res);
  }
  int f=0;
  res=0;
  for(int i=0;i<n;i++)
  {
    int f=0;
    for(auto c:s)
    {
      int x=c-v[i];
      if (m.count(x) && (m[x]>= 1 && x != v[i]))
        f=1;
    }
    if(f==0)
      res++;
  }
  cout << res<<endl;
}
