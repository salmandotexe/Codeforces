#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n;
  int x;
  cin >> n;
  vector<int> v(n);
  for(int i=0;i<n;i++)
    cin >> v[i];
  sort(v.begin(),v.end());
  int c=0;
  for(int i=0;i<v.size()-1;i++)
    if(v[i+1]-v[i]>1)
      c+=(v[i+1]-v[i]-1);
  cout << c <<endl;
}
