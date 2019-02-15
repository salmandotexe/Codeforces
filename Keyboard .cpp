#include <bits/stdc++.h>
using namespace std;

int main()
{
  char c;
  string s;
  cin >> c;

  map<char,char> m;
  if(c=='R')
  {
    cin >> s;

    int c=0;
    string S="sdfghjkl;"; //S to T. input S.
    string T="asdfghjkl";
    for(auto a:S)
      m[a]=T[c++];

    S="wertyuiop"; //S to T. input S.
    T="qwertyuio";
    c=0;
    for(auto a:S)
      m[a]=T[c++];
    S="xcvbnm,./";
    T="zxcvbnm,.";
    c=0;
    for(auto a:S)
      m[a]=T[c++];

    for(auto a:s) cout << m[a];
  }
  else
  {
    cin >> s;
    int c=0;
    string S="asdfghjkl"; //S to T. input S. a means s/
    string T="sdfghjkl;";
    for(auto a:S)
      m[a]=T[c++];

    S="qwertyuio"; //S to T. input S.
    T="wertyuiop";
    c=0;
    for(auto a:S)
      m[a]=T[c++];

    S="zxcvbnm,.";
    T="xcvbnm,./";
    c=0;
    for(auto a:S)
      m[a]=T[c++];

    for(auto a:s) cout << m[a];

  }
}
