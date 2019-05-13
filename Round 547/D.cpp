#include <bits/stdc++.h>
#define pb push_back
#define fast_cin ios_base::sync_with_stdio(false);cin.tie(NULL);
#define mp make_pair
#define pii pair<int,int>
using namespace std;

int freq[1000];
//int freqR[1000];

stack<int> G[1000];

int main()
{
  fast_cin
  int n;
  cin >> n;
  string l,r;
  cin >> l >> r;

  int c=1;
  for(auto a:l)
  {
    freq[a]++;
    G[a].push(c++);
  }
  vector<pii> ans;

  for(int i=1;i<=n;i++)
  {
    char c=r[i-1];

    if(c!='?')
    {
      if(freq[c]>0) //if find same character, match.
      {
        ans.pb(mp(i,G[c].top()));
        G[c].pop();
        freq[c]--;
      }
      else if(freq['?']>0)
      {
        ans.pb(mp(i,G['?'].top()));
        G['?'].pop();
        freq['?']--;
      }
    }
  }

  for(int i=1;i<=n;i++)
  {
    char c=r[i-1];
    if(c=='?')
    {
      if(freq[c]>0) //if find same character, match.
      {
        ans.pb(mp(i,G[c].top()));
        G[c].pop();
        freq[c]--;
      }
      else
      {
        for(int x=0;x<1000;x++)
        {
          if(freq[x]){
            ans.pb(mp(i,G[x].top()));
            G[x].pop();
            freq[x]--;
            break;
          }
        }
      }
    }
  }
  cout << ans.size()<<endl;
  for(auto a:ans) cout << a.second<<" " << a.first<<endl;

}
