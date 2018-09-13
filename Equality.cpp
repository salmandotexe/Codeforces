#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n,k;
  string s;
  cin >> n >> k >> s;
  map<char,int> m;
  for(int i=0;i<k;i++)
    m['A'+i]=0;
  for(int i=0;i<n;i++)
    m[s[i]]++;
  int M=INT_MAX;

  for(auto a:m)
    M=min(M,a.second);
  cout << M*k<<endl;
}
