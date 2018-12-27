#include <bits/stdc++.h>
#define vi vector<int>
using namespace std;


ostream& operator << (ostream &out, vector<int> &v)
{
  for(auto a:v)
    out << a<<" ";
  out<<endl;
}

int main()
{
  int n;
  cin >> n;
  vi v(n);
  map<int,int> freq;
  for(int i=0;i<n;i++)
  {
    cin >> v[i];
    freq[v[i]]++;
  }

  sort(v.begin(),v.end());
  if((v[n-2]-v[0])<(v[n-1]-v[1]))
    v.erase(v.begin()+(n-1));
  else
    v.erase(v.begin());

  if(v.size()==1)
    cout << 0<<endl;
  else
  {
    int mx=*max_element(v.begin(),v.end());
    int mn=*min_element(v.begin(),v.end());
    cout << mx-mn<<endl;
  }
}
