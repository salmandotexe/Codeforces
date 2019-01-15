#include <bits/stdc++.h>
#define vi vector<int>
using namespace std;

int main()
{
  int n,k;

  cin >> n >>k;
  vi a(n), freq(101);

  set<int> s;
  for(int i=0;i<n;i++)
  {
    cin >> a[i];
    s.insert(a[i]);
    freq[a[i]]++;
  }
  int minelements=k;
  minelements*=ceil(*max_element(freq.begin(),freq.end())/double(k));

  int res=0;
  for(auto a:s)
  {
    res+=(minelements-freq[a]);
  }
  cout <<res<<endl;
}
