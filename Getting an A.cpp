#include <bits/stdc++.h>
#define vi vector<int>

using namespace std;
double five
(int sum, int n)
{
  return sum*10>=45*n;
}
int main()
{
  int n;
  cin >> n;
  vi v(n);
  for(int i=0;i<n;i++) cin >> v[i];

  int res=accumulate(v.begin(),v.end(),0);
  int i=0;
  sort(v.begin(),v.end());
  while(!five(res,n))
    res+=5-v[i++];
  cout << i << endl;
}
