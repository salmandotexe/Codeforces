#include <bits/stdc++.h>
//https://codeforces.com/contest/1023/problem/C
//solved using editorial assistance.

using namespace std;

int main()
{
  //Bracket Subsequence problem.
  int n,k;
  string s;
  cin >> n >> k;
  cin >> s;

  stack<int> open;
  vector<bool> used(int(s.size()),false);

  int res=0;
  for(int i=0;i<s.size();i++)
  {
    if(s[i]=='(')
      open.push(i);
    if(s[i]==')')
    {
      used[open.top()]=true;  //when we meet a closing bracket in the stack, it is for the st.top()th element.
      used[i]=true;           //for the other bracket.
      open.pop();
      res+=2;
      if(res>=k)
        break;
    }
    //NOTE TO SELF: This yields a subsequence of length k obviously, but it is regular for the following reasons:
    //  1. no prefix contains more closing brackets than opening ones;
    //  2. the total number of closing bracket equals the total number of opening brackets.
  }
  for(int i=0;i<n;i++)
    if(used[i])
      cout << s[i];
  cout << endl;
}
