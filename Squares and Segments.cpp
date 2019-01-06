#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
  int n;
  ll res=0;
  cin >> n;

  ll side=floor(sqrt(n));

  if(n-(side*side)==0)
  {
    res=2*side;
  }
  else if(n-(side*side)<=side)
  {
    res=2*side+1;
  }
  else if(n-(side*side)>side)
  {
    res=2*side+2;
  }
  cout <<res<<endl;
}
