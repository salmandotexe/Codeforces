#include <bits/stdc++.h>
#define vi vector<int>
using namespace std;

int main()
{
  int n,k;
  cin >> n >>k;
  vi v(n);
  for(int i=0;i<n;i++) cin >> v[i];
  map<int,int> fq;
  for(int i=k-1;i<n;i++)
    fq[v[i]]++;
  if(fq.size()>1)
    cout << -1<<endl;
  else
  {
    int candidate=fq.begin()->first;
    int ans=k-1;
    for(int i=k-2;i>=0;i--)
      if(v[i]!=candidate)
        break;
      else
        ans--;
    cout << ans<<endl;
  }
}
