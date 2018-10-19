#include <bits/stdc++.h>

using namespace std;

int main()
{
  int t,hc,hw,mc,mw;
  cin >> t;
  for(int T=1;T<=t;T++){cin >> hc >> mc >> hw >> mw;printf("Case %d: %d\n", T, int(hw*60 - hc*60+mw-mc));}
}
