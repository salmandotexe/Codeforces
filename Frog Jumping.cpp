#include <bits/stdc++.h>
#define pb push_back
#define vi vector<int>
#define pii pair<int,int>
using namespace std;

int main()
{
  long long t,a,b,k;
  cin >> t;
  for(int i=0;i<t;i++)
  {
    cin >> a >> b >> k;
    cout << (long long)(floor(k/2.0)*a - floor(k/2.0)*b+(k%2)*a)<<endl;
  }
}
