#include <bits/stdc++.h>

//Solution to: https://www.codeforces.com/contest/757/problem/B

using namespace std;

int main()
{
  int n,x;
  cin >> n;

  /*
      vector<bool> notprime((int)(1e5+2),false);
      int N=(int)(1e5+1);
      N=sqrt(N);

      notprime[1]=notprime[0]=1;
      for(int i=2;i<=N;i++)
        for(int j=i*i;j<1e5+1;j+=i)
          notprime[j]=1;
  */
  unordered_map<int,int> facs;
  while(n--)
  {
    cin >> x;
    int sqx=sqrt(x);
    for(int i=2;i<=sqx;i++)
    {
      if(x%i==0)
        facs[i]++;
      while(x%i==0)
        x/=i; //avoid nonprime factors.
    }
    if(x>1)
      facs[x]++; //if result of above divisions is prime, it is a factor as well. i.e: 28 --> 14-->([7]) takes care case when number is prime
  }
  int res=1;
  for(auto A:facs)
    res=max(res,A.second);
  cout << res << endl;
}
