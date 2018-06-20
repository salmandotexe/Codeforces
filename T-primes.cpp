//https://vjudge.net/contest/234060#problem/F
#include <bits/stdc++.h>


/*
    Solution to: http://codeforces.com/problemset/problem/230/B
*/
using namespace std;

int isprime(long long n)
{
  if(n==2)
    return 1;
  int N=sqrt(n);
  if(n==0||n==1||!(n&1))
    return 0;
  for(int i=3;i<=N;i+=2)
  {
    if(n%i==0)
      return 0;
  }
  return 1;
}

int isperfect(long long n)
{
  long double sq=sqrt(n);
  return !(sq-floor(sq));
}


int main()
{
  int T;
  long long n;
  // Trick question to get you to bruteforce
  //    The only numbers with three factors, are prime squares except 1.
  // 4, 9, 25, 49...
  //in other words, if the square root is a prime integer, print yes. else no.
  cin >> T;
  while(T--)
  {
    cin >> n;
    long long sq=sqrt(n);
    if(isperfect(n)&&isprime(sq))
      cout << "YES\n";
    else
      cout << "NO\n";
  }
  //I spent an hour trying to do it with Sieve method
}
