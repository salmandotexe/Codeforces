#include <bits/stdc++.h>
#define vi vector<int>
#define ll long long int
#define ull unsigned long long int
#define ld long double
#define fi first
#define se second
#define pb push_back
#define pbb pop_back
#define mp make_pair
#define pii pair<int,int>
#define all(x) x.begin(), x.end()
using namespace std;

int main()
{
  int n;
  cin >> n;

  vi v(n),cnt(int(1e6)+1),ans;
  for(int i=0;i<n;i++)
  {
    cin >> v[i];
    cnt[v[i]]++;
  }

  ll sum=accumulate(all(v), 0ll);
  for(int i=0;i<n;i++)
  {
    sum-=v[i];
    --cnt[v[i]];
    if(!(sum&1) && sum/2<=(int(1e6)) && cnt[sum/2]>0)
      ans.pb(i+1);
    sum+=v[i];
    ++cnt[v[i]];
  }
  cout << ans.size()<<endl;
  for(auto a: ans) cout << a<<" ";
  cout <<endl;

}
