
#include <iostream>
#include <cmath>

/*
    Solution to: http://codeforces.com/problemset/problem/80/A
*/

using namespace std;

int isprime(int n)
{
  int N=sqrt(n);
  if(n==0||n==1||n==2||!(n&1))
    return 0;
  for(int i=3;i<=N;i+=2)
  {
    if(n%i==0)
      return 0;
  }
  return 1;
}
int main()
{
  int m,n;
  cin >> m >> n;
  for(int i=m+1;i<n;i++)
  {
    if(isprime(i))
    {
      cout << "NO"<<endl;
      return 0;
    }
  }
  if(isprime(n))
    cout << "YES"<<endl;
  else
    cout << "NO"<<endl;
}
