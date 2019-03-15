#include <bits/stdc++.h>
#define vi vector<int>
#define all(x) x.begin(),x.end()
#define ll long long
#define pii pair<ll,ll>
using namespace std;
#define fast_cin ios_base::sync_with_stdio(false);cin.tie(NULL);
std::mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

#define ran(a,b) rng() % ((b) - (a) + 1) + (a)


int main()
{
  fast_cin
  int T;
  cin >> T;

  for(int tc=1;tc<=T;tc++)
  {
    int n;
    cin >> n;

    vector<pair<pii,int> > a(2*n-1);

    ll tA=0,tB=0,resA=0,resB=0;

    for(int i=0;i<2*n-1;i++){

      cin >> a[i].first.first >> a[i].first.second;
      a[i].second=i+1;

      tA+=a[i].first.first;tB+=a[i].first.second;
    }

    bool f=0;

    for(int trials=0;trials<500;trials++)
    {
      resA=0,resB=0;
      random_shuffle(all(a));
      for(int i=0;i<n;i++)
      {
        resA+=a[i].first.first;
        resB+=a[i].first.second;
      }
      if(2*resA>=tA && 2*resB>=tB)
      {
        cout <<"YES\n";
        for(int i=0;i<n;i++) cout << a[i].second << " ";cout<<endl;
        f=1;
        break;
      }
    }
    if(!f) cout << "NO\n";//ac? ;D
  }
}
