#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
  ll i=10,c=0;
  ll n;
  cin >> n;
  for(i=1;i*i<n;i++)
    if(n%i==0)
      c+=2;
  if(i*i==n) c++;
  if(n==1)
    cout << 1;
  else
    cout << c;
  cout <<endl;
}
