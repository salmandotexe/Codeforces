#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define vi vector<int>
#define fast_cin ios_base::sync_with_stdio(false);cin.tie(NULL);
#define inf 100000
using namespace std;

ostream& operator << (ostream &out, vector<int> &v)
{
  for(auto a:v)
  out << a<< " ";
  out<<endl;
}

int main()
{
//  fast_cin
//  cin.tie(NULL);
  int n;
  cin >> n;
  vi v(n); for(int i=0;i<n;i++) cin >> v[i];

  int t=1;
  int tmpsum=inf;
  for(int res=1;res<=100;res++)
  {
    int sum=0;
    for(int j=0;j<n;j++)
    {
      int val=abs(v[j]-res);
      sum+=(val==0?0:val-1);
    }
    if(sum<tmpsum)
    {
      tmpsum=sum;
      t=res;
    }
  }
  cout << t << " "<< tmpsum<<endl;
}
