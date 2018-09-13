#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main()
{
  int n,i=-1;
  cin >> n;
  ll a,b;
  ll t2=n*(n+1)/2;
  ll t1=1;
  for(i=1;i<=n;i++)
  {
    t1= i*(i+1)/2;
    if(__gcd(t1,t2-t1)>1)
      break;
  }
  if(t1==t2)
    cout << "No"<<endl;
  else
  {
    cout << "Yes"<<endl;
    cout << i << " ";
    for(int j=1;j<=i;j++)
      cout << j << " ";
    cout << endl << n-i<< " ";
    for(int j=i+1;j<=n;j++)
      cout << j << " ";
    cout <<endl;
  }
}
