#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n;
  cin >> n;
  char c;
  vector<int> arr(26);
  while(n--)
  {
    cin >> c;
    arr[c-'a']++;
  }
  int res=0;
  int zero=0;
  for(auto a:arr)
  {
    if(a>1)
      res+=(a-1);
    if(a==0)
      zero++;
  }
  if(res>zero)
    cout << -1 <<endl;
  else
    cout << res<<endl;
}
