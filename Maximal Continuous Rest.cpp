#include <bits/stdc++.h>
#define all(x) x.begin(),x.end()
#define vi vector<int>
using namespace std;
int x;
ostream& operator << (ostream &out, vector<int> &v) { for(auto a:v) out << a<<" "; out<<endl; }
int main()
{
  int n;
  cin >> n;
  vi v(2*n);
  vi dp(2*n);
  for(int i=0;i<n;i++) cin >> v[i];
  for(int i=0;i<n;i++) v[n+i]=v[i];

  int res=0;
  int temp=0;
  for(int i=0;i<2*n;i++)
  {
    if(v[i]==1){
      temp++;
      res=max(res,temp);
    }
    else if(v[i]==0){
      temp=0;
    }
  }
  cout <<res<<endl;
}
