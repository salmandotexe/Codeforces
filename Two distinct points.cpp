#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define vi vector<int>
#define pii pair<int,int>
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
  cin >> n;
  int l1,r1,l2,r2;
  while(n--)
  {
    cin >> l1 >> r1 >> l2 >> r2;
    if(l1!=l2)
    {
      cout << l1 << " " << l2 <<endl;
      continue;
    }
    else if(r1!=r2)
    {
      cout << r1 << " " << r2 <<endl;
      continue;
    }
    else if(l1==l2&&r1==r2)
    {
      cout << l1 << " "<< r1<<endl;
      continue;
    }
    else
    {
      cout << l1 << " " <<r1<<endl;
      continue;
    }
  }
}
