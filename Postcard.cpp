include <bits/stdc++.h>

using namespace std;


int len=0;
int ques=0;
int ast=0;

int main()
{
  string s;
  cin >> s;

  int K;
  cin >> K;
  int n=s.size();
  for(int i=0;i<n;i++)
  {
    if(s[i]!='?'&&s[i]!='*')
      len++;
    if(s[i]=='?')
      ques++;
    if(s[i]=='*')
      ast++;
  }

  string res="";
  for(int i=0;i<n;i++)
  {
    if(s[i]!='?'&&s[i]!='*')
      res+=s[i];

    if(s[i]=='?'||s[i]=='*')
    {
      if(K<len)
      {
        res.pop_back();
        len--;
      }
      if(K==len)
        continue;
      if(K>len)
      {
        int delta=K-len;
        if(s[i]!='*')
          continue;
        for(int j=0;j<delta;j++)
        {
          res+=s[i-1];
          len++;
        }
      }
    }
  }
  if(res.size()!=K)
  {
    cout <<"Impossible\n";
  }
  else
    cout <<res<<endl;


}
