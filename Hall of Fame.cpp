#include <bits/stdc++.h>
#define mp make_pair
using namespace std;

int main()
{
  int t;
  cin >> t;
  for(int T=1;T<=t;T++)
  {
    map<char,int> m;
    string s;
    while(getline(cin,s) && s!="*")
      for(auto a:s)
        if(a!=' ')
          m[tolower(a)]++;

    multiset<pair<int,char>> ss;
    for(auto a:m)
      ss.insert(mp(a.second,a.first));

    auto it=--ss.end();

    int res=0;
    if(ss.size()<5)
    {
      printf("Case %d: %s\n", T,"Ineffective");
      continue;
    }
    for(int i=0;i<5;i++)
    {
      res+=int(it->second-'a');
      it--;
    }
    printf("Case %d: %s\n", T,(res>62?"Effective":"Ineffective"));
  }
}
