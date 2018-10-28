#include <bits/stdc++.h>
#define mp make_pair
#define pii pair<int,int>
using namespace std;

int main()
{
  int n;
  cin >> n;
  string s;
  cin >> s;

  int arr[27]={0};
  for(int i=0;i<n;i++)
    arr[s[i]-'a']++;

  string res="";
  res+=s[0];

  for(int i=1;i<n;i++)
  {
    if(s[i]!=s[i-1])
    {
      res+=s[i];
      break;
    }
  }
  if(res.size()!=1)
    cout << "YES\n"<<res<<endl;
  else
    cout <<"NO\n";

}
