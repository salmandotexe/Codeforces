#include <bits/stdc++.h>
#define vi vector<int>
#define ll long long
using namespace std;

int main()
{

  int n;
  int x;
  cin >> n;
  multiset<int> ms;

  for(int i=0;i<n;i++)
  {
    cin >> x;
    ms.insert(x);
  }

  int c1=*max_element(ms.begin(),ms.end());
  ll C1=c1;
  ll C2=1;
  for(int i=1;i<=C1;i++) if(C1%i==0) ms.erase(ms.find(i));


  C2=*max_element(ms.begin(),ms.end());
  cout << C1 << " "<< C2 <<endl;
}
