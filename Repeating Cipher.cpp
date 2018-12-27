#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n;
  cin >> n;
  int cnt=0;
  char a;
  string res="";
  for(int i=1;;i++)
  {
    for(int j=1;j<=i;j++)
    {
      cin >> a;
      if(j==1)
        res+=a;
      cnt++;
      if(cnt==n)
        goto label;
    }

  }
  label:
  cout << res<<endl;
}
