#include <bits/stdc++.h>

using namespace std;

int main()
{
  int t,l,r,d;
  cin >> t;
  while(t--)
  {
    cin >> l >> r >> d;
    int lb=(l-1)/d;
    int rb=ceil(r/double(d)) +(r%d==0);
    if(lb>0)
      cout << d;
    else
      cout << d*rb;
    cout<<endl;
  }
}
