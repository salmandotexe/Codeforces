
#include <bits/stdc++.h>

using namespace std;

string revsubstring(string s, int j)
{
  string res="";
  for(int i=j-1;i>=0;i--)
    res+=s[i];
  for(int i=j;i<s.size();i++)
    res+=s[i];
  return res;
}

int main()
{
  int n;
  string s;
  cin >> n;
  getchar();
  cin >> s;
  int sq=sqrt(n);//n<100.
  int divi[n+1]={0};
  for(int i=sq;i>=1;i--)
  {
    if(n%i==0)
    {
      divi[i]=1;
      divi[n/i]=1;
    }
  }
  for(int i=0;i<=n;i++)
  {
    if(divi[i])
    {
      s=revsubstring(s,i);
      //cout << i <<endl;
    }
  }
  cout << s<<endl;

}
