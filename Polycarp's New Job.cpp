#include <bits/stdc++.h>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n;
  cin >> n;
  char c;
  int u,v;
  int mm=1,MM=1;
  while(n--)
  {
    cin >> c >> u >> v;
    if(c=='+')
    {
      mm=max(min(u,v),mm);
      MM=max(max(u,v),MM);
      //cout << "minimum dimension: " << mm << " "<< MM<<endl;
    }
    else if(c=='?')
    {
      int minsize=min(u,v);
      int maxsize=max(u,v);
      if(mm<=minsize && MM<=maxsize)
        cout << "YES\n";
      else
        cout << "NO\n";

    }
  }
}
