#include <bits/stdc++.h>
//1023B

using namespace std;

int main()
{
  long long n,k;
  cin >> n >> k;
  if(k<=n)
    cout << (k-1)/2;
  else if (k>=2*n)
    cout << 0;
  else
    cout << ((n-(k-n))-1)/2 +1;
  cout <<endl;
}
