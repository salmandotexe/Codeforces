#include <bits/stdc++.h>
using namespace std;

int main()
{
  long long a,b,k;
  cin >> k >> a >> b;
  if(a<=0 && b >=0)
  {
    a*=-1;
    //b*=-1;
    //swap(a,b);
    cout << 1+abs(a/k+b/k);
    cout << endl;
    return 0;
  }
  else if(a<=0 && b<=0)
  {
    a*=-1;
    b*=-1;
    swap(a,b);
  }
  cout << b/k-(a-1)/k;  //because overlapping property of a=1, and a%k!=0
  cout << endl;
}
