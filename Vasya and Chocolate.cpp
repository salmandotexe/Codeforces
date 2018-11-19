#include <bits/stdc++.h>
#define push_back pb

using namespace std;

typedef unsigned long long ull;
int main()
{
  unsigned long long s,a,b,c,res=0;
  int n,t;
  cin >> t;
  while(t--)
  {
    res=0;
    cin >> s >> a >> b >> c;
    ull buy=s/c;
    res+=buy;
    res+=(buy/a)*b;
    cout << res<<endl;
  }
}
