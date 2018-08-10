#include <iostream>
#include <vector>

using namespace std;

int main()
{
  int n;
  int f=0;
  cin >> n;
  int N=n;
  char c;
  vector<int> v;
  while(n--)
  {
    cin >> c;
    v.push_back(c-'0');
  }
  int res=0;
  for(auto a:v)
    if(a!=4 && a!=7)
      f=1;
  for(int i=0;i<N/2&&f==0;i++)
  {

    res+= v[N/2+i];
    res-= v[i];
  }
  if(res==0 && !f)
  {
    cout << "YES\n";
  }
  else
    cout << "NO\n";
}
