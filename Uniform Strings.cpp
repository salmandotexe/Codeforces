#include <bits/stdc++.h>
#define vi vector<long long>
#define ll long long

using namespace std;
ostream& operator << (ostream &out, vector<long long> &v)
{
  for(auto a:v)
    out << a<<" ";
  out<<endl;
}

int main()
{
  int t,n,k;
  cin >> t;
  while(t--)
  {
    cin >> n >> k;
    string s="";
    for(int i=0;i<n;i++)
      s+=(char)('a'+i%k);
    cout << s <<endl;
  }
}
//fixed typo
