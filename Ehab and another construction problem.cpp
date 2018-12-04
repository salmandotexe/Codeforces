#include <bits/stdc++.h>
#define vi vector<int>
#define vb vector<bool>
#define pb push_back

using namespace std;


int main()
{
  int x;
  cin >> x;
  int i=2;
  if(x<=1)
  {
    cout << "-1\n";
    return 0;
  }
  else
  {
    cout <<(x%2==0?x:x-1)<<" 2\n";
  }

}
