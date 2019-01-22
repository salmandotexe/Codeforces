#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define vi vector<int>
using namespace std;
ostream& operator << (ostream &out, vector<int> &v)
{
  for(auto a:v)
  out << a<< " ";
  out<<endl;
}

int main()
{
  string S;
  cin >> S;
  int n=S.size();

  stack<char> st;


  int res=0;

  st.push(S[0]);
  for(int i=1;i<n;i++)
  {
    char c=S[i];
    if(st.empty())
    {
      st.push(c);
      continue;
    }
    if(c==st.top())
    {
      res=(!res);
      st.pop();
      continue;
    }
    else st.push(c);
  }
  if(res==0) cout <<"No\n";
  else cout <<"Yes\n";

}
