//Solution to: https://codeforces.com/gym/101810/problem/C

#include <bits/stdc++.h>

using namespace std;

int main()
{
  int t,n,m;
  int res=0;
  
  cin >> t;
  while(t--)
  {
    cin >> n;
    m=n-1;
    res=n xor m;
    int c=0;
    while(res)
    {
      if(res&1)
        c++;
      res/=2;
    }
    cout << c << endl;
  }
}
