#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n, a,b;
  cin >> n;
  int i=0,j=0;
  while(n--)
  {
    cin >> a >> b;
    if(a+b>i+j)
    {
      i=a;
      j=b;
    }
  }
  cout << i+j <<endl;
}
