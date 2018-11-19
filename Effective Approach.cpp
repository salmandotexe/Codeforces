#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n,m,x; cin >> n;
  int arr[n+2]={0};
  for(int i=1;i<=n;i++){ cin >> x;arr[x]=i;}
  cin >> m;
  long long X=0;
  long long Y=0;
  for(int i=0;i<m;i++)
  {
    cin >> x;
    X+=arr[x];Y+=(n+1-arr[x]);
  }
  cout << X << " "<< Y <<endl;

}
