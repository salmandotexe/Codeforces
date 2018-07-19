//Solution to: https://codeforces.com/problemset/problem/633/B
#include <iostream>
#include <vector>

using namespace std;

int n5(int a)
{
  int alpha=a;
  int n5=0;
  for(int i=5;;i*=5)
  {
    if(i<=alpha)
      n5+=alpha/i;
    else
      break;
  }
  return n5;
}

int main()
{
  int m;
  cin >> m;
  vector<int> v;

  for(int i=1;;i++)
  {
    if(n5(i)==m)
      v.push_back(i);
    if(n5(i)>m)
      break;
  }
  cout << v.size()<<endl;
  for(auto a:v)
    cout << a << " ";
}
