#include <bits/stdc++.h>
//WA on Test 4 now. fml
using namespace std;
typedef long long ll;
int main()
{
  int t;
  cin >> t;
  while(t--)
  {
    int n,x;
    cin >> n;

    map<int,int> m;
    while(n--)
    {
      cin >> x;
      if(m[x]==0)
        m[x]=1;
      else
        m[x]++;
    }
    vector<int> sides;
    for(auto &a:m)
    {
      while(a.second>=2)
      {
        sides.push_back(a.first);
        a.second-=2;
      }
    }
    ll a=sides[0];
    ll b=sides[1];
    ll p=2*(a+b);
    ll s = a*b;
    ll resA=a,resB=b;
    
    for(int i=1;i<sides.size()-1;i++)
    {
      ll A=sides[i];
      ll B=sides[i+1];
      ll P=2*(A+B);
      ll ar=A*B;
      if(P*P*s<p*p*ar)
      {
        resA=A;
        resB=B;
      }
    }
    cout << resA << " "<< resA<< " "<<resB << " "<<resB<<endl;
  }
}
