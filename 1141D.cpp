#include <bits/stdc++.h>
#define all(x) x.begin(),x.end()
#define pb push_back
#define mp make_pair
using namespace std;

int m[1000];
stack<int> G[1000];
int main()
{
  //WA on test 22
  int n;
  cin >> n;
  string l,r;
  cin >> l >> r;

  int i=1;
  for(auto a:l) {
    m[a]++;
    G[a].push(i++);
  }
  int res=0;
  //sort(all(r));
  //reverse(all(r));

  vector<pair<int,int> > ans;
  for(int i=1;i<=n;i++)
  {
    char a=r[i-1];
    if(a=='?')
    {
      for(int j=999;j>=0;j--)
      {
        if(m[j]>0){
          res++;
          m[j]--;
          ans.pb(mp(G[j].top(),i));//changed
          G[j].pop();
          break;
        }
      }
    }
    else
    {
      if(m[a]>0){
        res++;
        m[a]--;
        ans.pb(mp(G[a].top(),i));//
        G[a].pop();
      }
      else if(m['?']>0)
      {
        res++;
        m['?']--;
        ans.pb(mp(G['?'].top(),i));//
        G['?'].pop();
      }
    }
  }
  cout <<res<<endl;
  for(auto a:ans) cout << a.first <<" " <<a.second<<endl;
}
