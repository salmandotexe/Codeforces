#include <bits/stdc++.h>

using namespace std;
typedef vector<int> vi;
int main()
{
  int n;
  cin >> n;
  vi v(n);
  for(int i=0;i<n;i++)
    cin >> v[i];
  int i=0,j=1;
  int res=0;
  while(i<n)
  {
    int j=i;
    int c=0;
    while(j+1<n && v[j+1]<=2*v[j])//not the same problem
      j++,c++;
    res=max(res,c);
    i=j;
    i++;
  }
  cout << res<<endl;
}
