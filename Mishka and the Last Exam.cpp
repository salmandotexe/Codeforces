#include <bits/stdc++.h>
#define vi vector<long long>
using namespace std;
#define ll long long
ostream& operator << (ostream &out, vector<ll> &v)
{
  for(auto a:v)
    out << a<< " ";
  out<<endl;
}
int main()
{
  int n;
  cin >> n;
  vi b(n/2+1);
  for(int i=0;i<n/2;i++) cin >> b[i];

  vi a(n);
  ll l=0,r=0;
  for(int i=0, j=n-1; i< n/2 ;i++, j--)
  {
    if(i==0)
    {
      a[i]=0;
      a[j]=b[i];
      l=a[i];
      r=a[j];
      continue;
    }
    //element in comparison is b[i].
    l=max(l,b[i]-a[j+1]);
    a[i]=l;
    a[j]=b[i]-l;
  }
  cout << a;

}
