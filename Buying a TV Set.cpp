#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

ll gcd(ll a , ll b)
{
   if(b==0) return a;
   a%=b;
   return gcd(b,a);
}

int main()
{
  ll a,b,x,y;
  cin >> a >> b >> x >> y;
  ll g=gcd(x,y);
  x/=g,y/=g;
  cout << min(a/x,b/y)<<endl;
}
