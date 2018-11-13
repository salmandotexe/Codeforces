#include <bits/stdc++.h>
#define pii pair<double,double>
using namespace std;


pii quadratic(double a, double b, double c)
{
  double det=(b*b-4*a*c);
  det/=(4*a*a);
  double x1=(-1*b)/(2.0*a);
  pii p={x1,det};
  return p;
}
int main()
{
  int t;
  cin >> t;
  while(t--)
  {
    double d;
    cin >> d;
    pii root=quadratic(1,-d,d);
    if (root.second<0)
    {
      cout <<"N\n";
      continue;
    }
    else
    {
      double b=double(root.first+sqrt(root.second)+1e-10);
      cout<<fixed;
      cout << setprecision(9);
      cout << "Y "<<  b<< " "<<d-b<<endl;
    }
  }
}
