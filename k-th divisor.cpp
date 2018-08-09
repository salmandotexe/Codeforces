#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{

  ll N, k;
  cin >> N >> k;
  ll sqa=sqrt(N);

  set<ll> f;
  f.insert(1);

  for(ll i=2; i<=sqa;i++)
  {
    if(N%i==0)
    {
      f.insert(i);
      f.insert(N/i);
    }
  }
  f.insert(N);
  auto a=f.begin();
  if(k>f.size())
  {
    cout << -1<<endl;
    return 0;
  }
  for(int i=0;i<k-1;i++)
    a++;
  cout << *a<<endl;
}
