#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define vi vector<int>
using namespace std;

ostream& operator << (ostream &out, vector<int> &v)
{
  for(auto a:v)
    out << a;
  out<<endl;
}

int main()
{
  int t;
  cin >> t;
  int a,b;
  while(t--)
  {
    cin >> a >> b;
    cout << a << " " << 2*a<<endl;
  }
}
