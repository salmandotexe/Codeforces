#include <bits/stdc++.h>
#define vi vector<int>
#define ll long long
#define pii pair<int,int>
#define mp make_pair
#define all(x) x.begin(),x.end()

using namespace std;
ostream& operator << (ostream &out, vector<int> &v)
{
  for(auto a:v)
    out << a<< " ";
  out<<endl;
}



int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(NULL);
  int n,u,v;
  cin >> n;
  vector<pii> points(n);
  vector<pii> direction(n);
  for(int i=0;i<n;i++)
  {
    cin >> u >> v;
    points[i]=mp(u,v);
  }
  map<pii,int> freq;
  for(int i=0;i<n;i++)
  {
    cin >> u >> v;
    direction[i]=mp(u,v);
  }

  if(n==1)
  {
    cout << points[0].first+direction[0].first << " "<< points[0].second+direction[0].second<<endl;
    return 0;
  }
  for(int i=0;i<n;i++)
  {
    pii p2=points[i];
    for(int j=0;j<n;j++)
    {
      pii T2=mp(p2.first+direction[j].first,p2.second+direction[j].second);
      freq[T2]++;
    }
  }
  pii ans;
  int maxc=0;
  for(auto A:freq)
  {
    if(A.second>maxc)
    {
      ans=A.first;
      maxc=A.second;
    }
  }
  cout << ans.first << " "<< ans.second<<endl;


}
