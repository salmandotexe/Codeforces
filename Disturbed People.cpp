#include <bits/stdc++.h>
#define pb push_back
#define vi vector<int>
#define pii pair<int,int>
using namespace std;

int main()
{
  int t,a,b,k,n;
  cin >> n;
  vi v(n);
  for(int i=0;i<n;i++)
    cin >> v[i];
  int res=0;
  for(int i=0;i<n-2;i++)
  {
    if(v[i]==1 && v[i+1]==0 && v[i+2]==1)
    {
      v[i+2]=0;
      res++;
    }
  }
  cout << res<<endl;
}
