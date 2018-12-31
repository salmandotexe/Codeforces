#include <bits/stdc++.h>
#define vi vector<int>
#define ll long long
#define all(x) x.begin(),x.end()

using namespace std;

int main()
{
  int y,b,r;
  cin >> y >> b >> r;
  int res=6;
  int y1=1,b1=2,r1=3;

  while(y1!=y && b1!=b && r1!=r)
  {
    y1++;b1++;r1++;
    res+=3;
  }
  cout <<res<<endl;
}
