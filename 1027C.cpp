#include <bits/stdc++.h>
//WA on Test 4
using namespace std;
typedef long long ll;
int main()
{
  int t;
  cin >> t;
  while(t--)
  {
    int n,x;
    cin >> n;

    map<int,int> m;
    while(n--)
    {
      cin >> x;
      if(m[x]==0)
        m[x]=1;
      else
        m[x]++;
    }
    vector<int> sides;
    for(auto &a:m)
    {
      while(a.second>=2)
      {
        sides.push_back(a.first);
        a.second-=2;
      }
    }
    ll a=sides[0];
    ll b=sides[1];
    ll ps=2*(sides[0]+sides[1]);
    ps*=ps;
    ll s=sides[0]*sides[1];
    for(int i=0;i<sides.size()-1;i++)
    {
      ll pss=ll(2*(sides[i]+sides[i+1]));
      pss*=pss;
      ll ss= ll(sides[i]*sides[i+1]);
      if(ll(pss*s)<ll(ps*ss))
      {
        a=sides[i];
        b=sides[i+1];
      }
    }
    cout << a << " " << b << " "<< a << " "<<b<<endl;
  }
}
