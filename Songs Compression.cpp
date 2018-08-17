#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n,m,x,y;
  cin >> n >> m;
  vector<int> s(n),c(n);
  multiset<int> delta;
  long long sumx=0;
  long long sumy=0;
  for(int i=0;i<n;i++)
  {
    cin >> x >> y;
    s[i]=x;
    c[i]=y;
    sumx+=x;
    sumy+=y;
    delta.insert(x-y);
  }
  if(sumy>m)
    cout << -1 << endl;
  else
  {
    int res=0;
    while(sumx>m)
    {
      if(!delta.empty())
      {
        auto it=delta.end();
        it--;
        sumx-=*it;
        delta.erase(it);
        res++;
      }
    }
    cout << res << endl;
  }

}
