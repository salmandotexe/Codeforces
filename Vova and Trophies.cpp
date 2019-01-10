#include <bits/stdc++.h>
using namespace std;

int l[100006],r[100006];

int main()
{
  int n;
  cin >> n;
  string s;
  cin >> s;

  int cnt=0;
  l[0]=(s[0]=='G');
  r[n-1]=(s[n-1]=='G');

  for(int i=1;i<n;i++)
  {
    if(s[i]=='G')
      l[i]=l[i-1]+1;
    else l[i]=0;
  }

  for(int i=n-2;i>=0;i--)
  {
    if(s[i]=='G')
      r[i]=r[i+1]+1;
    else r[i]=0;
  }
  for(int i=0;i<n;i++) cnt+= s[i]=='G';
  int mx=0;

  for(int i=0;i<n;i++)
  {
    int val=1;
    if(s[i]=='S')
    {
      if(i>0) val+=l[i-1];
      if(i+1<n) val+=r[i+1];
      mx=max(mx,val);
    }
  }
  if(mx>cnt) mx=cnt;
  cout <<(cnt==n?n:mx)<<endl;
}
