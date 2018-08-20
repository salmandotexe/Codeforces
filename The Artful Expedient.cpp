#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
int main()
{
  int n;
  cin >> n;
  ll o;
  set<ll> x,y;
  for(int i=0;i<n;i++)
  {
    cin >> o;
    x.insert(o);
  }
  for(int i=0;i<n;i++)
  {
    cin >> o;
    y.insert(o);
  }
  int res=0;
  for(auto i:x)
    for(auto j:y)
    {
      ll alpha= i xor j;
      if(x.count(alpha) || y.count(alpha))
        res++;
    }
  if(res&1)
    cout << "Koyomi\n";
  else
    cout << "Karen\n";
}
