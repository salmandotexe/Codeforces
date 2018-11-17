#include <bits/stdc++.h>
#define pii pair<int,int>
#define vi vector<int>
#define pb push_back
using namespace std;

int main()
{
  int n;
  cin >> n;
  int x;
  vector<pii> data(n);
  int sum=0;
  for(int i=0;i<n;i++)
  {
     cin >> x;
     sum+=x;
     data[i]={x,i+1};
  }
  sort(data.begin(),data.end());
  vi ans;
  for(auto a:data)
  {
    int largest=0;
    largest=((a.first==data[n-1].first)?(data[n-2].first):(data[n-1].first));
    if(sum-largest-a.first==largest)
      ans.pb(a.second);
  }
  cout << ans.size()<<endl;
  for(auto a:ans) cout << a << " ";
  cout <<endl;


}
