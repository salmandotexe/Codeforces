#include <bits/stdc++.h>

using namespace std;

int m,n;
int dist(int a)
{
  return ((a-1)%n+1);
}
int dist(int a, int b)
{
  int xa=dist(a);
  int xb=dist(b);
  int d=xb-xa;
  if(d<0)
    return n+d;
  return d;
}
int main()
{
  cin >> n >> m;
  int a=1;
  long long res=0;
  int b=-1;
  for(int i=0;i<m;i++)
  {
    cin >> b;
    res+=dist(a,b);
    a=b;
  }
  cout <<res<<endl;
}
