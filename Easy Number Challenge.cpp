#include <bits/stdc++.h>
#define MAXN 1e6+1
using namespace std;

int divisors[(int)(1e6+5)];

int main()
{
  divisors[1]=1;
  for(int i=2;i<=MAXN;i++)
  {
    divisors[i]++;
    for(int j=i;j<=MAXN;j+=i)
      divisors[j]++;
  }
  int a,b,c;
  cin >> a >> b >> c;
  long long res=0;
  long long mod=1073741824;
  for(int i=1;i<=a;i++)for(int j=1;j<=b;j++)for(int k=1;k<=c;k++)
    res+=(long long)(divisors[i*j*k])%mod;
  cout <<res<<endl;
}
