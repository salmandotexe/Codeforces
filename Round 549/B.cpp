#include <bits/stdc++.h>
#define ll long long int
#define vi vector<int>
#define vll vector<ll>
#define vvi vector < vi >
#define pii pair<int,int>
#define pll pair<long long, long long>
#define mod 1000000007
#define inf 1000000000000000001;
#define all(c) c.begin(),c.end()
#define mp(x,y) make_pair(x,y)
#define mem(a,val) memset(a,val,sizeof(a))
#define eb emplace_back
#define pb push_back
#define f first
#define s second
#define fast_cin ios_base::sync_with_stdio(false);cin.tie(NULL);
#define precise fixed(cout);cout<<setprecision(16);
using namespace std;

ostream& operator << (ostream &out, vector<int> &v) { for(auto a:v) out << a<<" "; out<<endl; }

int main()
{
  string s;
  cin >> s;
  int n=s.size();
  ll res=1;
  for(auto a:s)
  {
    res*=(a-'0');
  }
  for(int pos=0;pos<n;pos++)
  {
    if(s[pos]=='0') continue;

    ll cur=1;
    for(int i=0;i<pos;i++){
      cur*=(s[i]-'0');
      if(cur==0) cur=1;
    }
    cur*=((s[pos]-'0')-1);
    if(cur==0) cur=1;

    for(int i=pos+1;i<n;i++){
      cur*=9;
    }
    //cout << cur<<endl;
    res=max(res,cur);
  }
  cout <<res<<endl;
}
