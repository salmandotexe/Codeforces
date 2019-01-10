#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
  int t,n,x,y,d;
  cin >> t;
  while(t--)
  {
    cin >> n >> x >> y >> d;

    if(abs(x-y)%d==0)
    {
      cout << abs(x-y)/d <<endl;
      continue;
    }
    else
    {
      ll D1= ceil((x-1)/double(d))+(y-1)/d;
      ll D2= ceil(abs(n-x)/double(d))+abs(y-n)/d;

      if(abs(y-1)%d==0 && abs(n-y)%d==0)
      {
        cout << min(D1,D2)<<endl;
        continue;
      }
      if(abs(y-1)%d==0)
      {
        cout << D1<<endl;
        continue;
      }
      if(abs(y-n)%d==0)
      {
        cout << D2<<endl;
        continue;
      }
      cout <<-1<<endl;


    }
  }
}
