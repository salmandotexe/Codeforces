#include <bits/stdc++.h>

//Solution to: https://codeforces.com/problemset/problem/577/A


using namespace std;
typedef pair<int,int> pii;
int main()
{
  int x;
  int n;
  set<pii> facs;
  cin >> n >> x;

  int s=sqrt(x);

  for(int i=1;i<=s;i++)
  {
    if(x%i==0)
    {
      if(i>n || x/i>n)
        continue;
      pii p;
      p.first=i;
      p.second=x/i;
      facs.insert(p);
      swap(p.first,p.second);
      facs.insert(p);
    }
  }
  cout << facs.size()<<endl;
}
//edit: updated description
