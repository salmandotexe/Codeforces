#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n,a=1,b=5,c=10,d=20,e=100;
  cin >> n;
  cout << n/e+(n%e)/d+((n%e)%d)/c+(((n%e)%d)%c)/b+((((n%e)%d)%c)%b);
}
