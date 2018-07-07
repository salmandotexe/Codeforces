//solution to: https://codeforces.com/contest/999/problem/A
#include <bits/stdc++.h>

using namespace std;

int main()
{
  list<int> v;
  vector<int> res;

  int n,x,k;

  cin >> n >>k;
  while(n--)
  {
    cin >> x;
    v.push_back(x);
  }
  int a=v.front();
  int c=0;
  while(a<=k&& !v.empty())
  {
    v.pop_front();
    c++;
    a=v.front();
  }
  int b=v.back();

  while(b<=k && !v.empty())
  {
    v.pop_back();
    c++;
    b=v.back();
  }
  cout << c << endl;
}
