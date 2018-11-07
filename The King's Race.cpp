#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
  ll n,xc,yc;
  cin >> n;
  cin >> xc >> yc;
  ll delxwhite,delywhite,delxblack,delyblack;
  delxwhite=xc-1;
  delywhite=yc-1;
  delxblack=n-xc;
  delyblack=n-yc;
  cout <<(max(delxwhite,delywhite)<=max(delxblack,delyblack)?"White\n":"Black\n");
}
