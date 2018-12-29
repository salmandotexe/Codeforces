#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define all(x) x.begin(),x.end()
using namespace std;

int main()
{
  ll n,s;
  cin >> n >> s;
  vi v(n);
  for(int i=0;i<n;i++) cin >> v[i];
  sort(all(v));

  //s>median.
  ll median=v[n/2];
  ll res=0;

  if(s>median)
  {
    for(int i=n-1;i>=n/2;i--)
      if(v[i]<s)
        res+=(s-v[i]);
  }
  else if(s<median)
  {
    for(int i=0;i<=n/2;i++)
      if(v[i]>s)
        res+=(v[i]-s);
  }
  cout <<res<<endl;
  //cout << s <<" "<<median <<endl;

}
