#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n,d,m;
  cin >> n >> d;
  cin >> m;

  pair<int,int> P={0,d};
  pair<int,int> Q={n,n-d};

  int x,y;
  for(int i=0;i<m;i++)
  {
    cin >> x >> y;
    if(abs(x-P.first)>=abs(y-P.second))
    {
      if(abs(x-Q.first)>=abs(y-Q.second))
        cout <<"YES\n";
      else
        cout << "NO\n";
    }
    else
      cout << "NO\n";
  }



}
