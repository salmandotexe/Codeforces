#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n,m,x;
  cin >> n >> m;
  queue<int> wallet;
  queue<int> game;
  while(n--)
  {
    cin >> x;
    game.push(x);
  }
  while(m--)
  {
    cin >> x;
    wallet.push(x);
  }
  int res=0;

  while(!game.empty())
  {
    if(wallet.empty())
      break;
    int c=wallet.front();
    //cout <<endl << c;
    if(c>=game.front())
    {
      wallet.pop();
      res++;
    }
    game.pop();
  }
  cout << res << endl;

}
