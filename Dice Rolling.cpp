#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n,x;
  cin >> n;
  while(n--)
  {
    cin >> x;
    cout << x/7+(x%7==0?0:1)<<endl;;
  }
}
