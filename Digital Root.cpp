#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define pb push_back
#define mp make_pair

using namespace std;
ostream& operator << (ostream &out, vector<int> &v)
{
  for(auto a:v)
    out << a<< " ";
  out<<endl;
}

int main()
{
  int n;
  cin >>n;
  while(n--)
  {
    ll ki, xi;
    cin >> ki >> xi;
    cout << (ki-1)*9 + xi <<endl;
  }
}
