#include <bits/stdc++.h>
#define vi vector<int>
using namespace std;

int main()
{
  int n;
  cin >> n;
  vi v(n);
  for(int i=0;i<n;i++) cin >> v[i];
  bool f=0;
  for(int i=1;i<n;i++) if(v[i-1]>=v[i]) {f=1;break;}

  if(!f)
    cout << 0 <<endl;
  else
  {
    cout << n+1<<endl;
    cout << "1 "<< n<< " 100000\n";
    for(int i=0;i<n;i++)
      v[i]+=100000;
    for(int i=1;i<=n;i++)
      cout << 2 << " "<<i << " "<< v[i-1]-(i-1)<<"\n";
  }
}
