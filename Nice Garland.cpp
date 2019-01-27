#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n;
  cin >> n;
  string s;
  cin >> s;
  string t="RGB";
  sort(t.begin(),t.end());
  int mn=100000000;
  string mns="";
  while(1)
  {
    int res=0;
    for(int j=0;j<n;j++)
    {
      char d= t[j%3];
      if(d!=s[j])
        res++;
    }
    if(mn>res)
    {
      mn=res;
      mns=t;
    }
    if(!next_permutation(t.begin(),t.end())) break;
  }
  cout << mn<<endl;
  for(int i=0;i<n;i++) cout << mns[i%3];
  cout<<endl;
}
