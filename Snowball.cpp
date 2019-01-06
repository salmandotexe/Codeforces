#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define vi vector<int>
using namespace std;

int main()
{
  int w,h,u1,d1,u2,d2;
  cin >> w >> h >> u1 >> d1 >> u2 >> d2;
  ll W=w;
  for(int i=h;i>=0;i--)
  {
    //cout << W<< " height "<< i <<endl;
    W+=i;
    if(i==d1)
    {
      W-=u1;
      if(W<0) W=0;
      continue;
    }
    if(i==d2)
    {
      W-=u2;
      if(W<0) W=0;
      continue;
    }
  }
  cout << W <<endl;
}
