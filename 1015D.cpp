#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

ll dist(ll a, ll b)
{
  return a>b?(a-b):(a+b);
}

int main()
{
  long long n,k,s,d,i;
  ll delta, curpos=1,dist;
  cin >> n >> k >> s;
  if(k*(n-1)<s || k>s)
    cout << "NO\n";
  else
  {
    cout << "YES\n";
    ll d=floor((s-k)/(n-1));  //s-k covered in k.
    delta=k-d;
    for(i=0;i<d;i++)
      cout << (i&1?1:n)<< " ";
    dist+=d*(n-1);
    while(delta>0)
    {
      ll a=min(n-1,dist);
      if(curpos>a)
        curpos-=a;
      else
        curpos+=a;
      a=curpos;
      cout << curpos<<" ";
      dist-=a;
      delta--;
    }
  }
}
