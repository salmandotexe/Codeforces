#include <bits/stdc++.h>
#define vi vector<long long>
#define ll long long

using namespace std;
ostream& operator << (ostream &out, vector<long long> &v)
{
  for(auto a:v)
    out << a<<" ";
  out<<endl;
}

int main()
{
  int t,n,k,u;
  cin >> n;
  multiset<int> s;
  vi v(101);
  for(int i=0;i<n;i++)
  {
    cin >> u;
    v[u]++;
    s.insert(u);
  }
  int res=0;
  for(int i=0;i<101;i++)
  {
    if(v[i]&&v[i]%2)
    {
      for(int j=i+1;j<101;j++)
      {
        if(v[j]&&v[j]%2)
        {
          res+=(j-i);
          v[j]++;
          v[i]--;
          break;
        }
      }
    }
  }
  cout << res<<endl;

}
