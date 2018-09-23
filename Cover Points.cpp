#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;

ll gcd(ll  a, ll b)
{
    if (a == 0)
        return b;
    return gcd(b%a,a);
}

//Edit: Solution Hacked. :( 

/*
hack test: 

2
1 6
4 4

*/

int main()
{
  int n;
  cin >> n;
  ll res=INT_MIN;
  ll a,b;

  ll x,y;
  while(n--)
  {
    cin >> a >> b;
    ll r=a*a + b*b;
    if(r>res)
    {
      res=r;
      x=a;y=b;
    }
  }
  cout << ll(x+y)<<endl;

}
