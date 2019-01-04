#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define vi vector<int>
using namespace std;

ostream& operator << (ostream &out, vector<int> &v)
{
  for(auto a:v)
    out << a;
  out<<endl;
}

int n;
vector<int> v(16);

bool res=0;

int K(int i,int val)
{
  if(i==-1)
  {
    //res|=(val==0||val==360);  this is incorrect (got hacked.)
    
    res|=(val==0||(val%360==0));  //this is the correct line.
    return (val==0||(val%360==0));
  }
  else
  {
    K(i-1,val+v[i]);
    K(i-1,val-v[i]);
  }
}

int main()
{
  cin >> n;
  for(int i=0;i<n;i++) cin >> v[i];
  K(n,0);
  if(res) cout << "YES\n";
  else cout << "NO\n";
}
