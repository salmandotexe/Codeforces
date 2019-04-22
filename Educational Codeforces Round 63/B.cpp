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

int m[100];
int main()
{
  int n;string s;
  cin >> n;
  cin >> s;
  for(auto a:s){
    m[a-'0']++;
  }
  int totalmoves=(n-11);
  int hismoves=totalmoves/2;
  int mymoves=totalmoves-hismoves;
  for(int i=0;i<n;i++){
    if(s[i]=='8' &&hismoves) s[i]='X',hismoves--;
  }
  string news="";
  for(int i=0;i<n;i++)
    if(s[i]!='X')news+=s[i];
  n=news.size();
  s=news;
  int r=0;
  for(int i=0;i<n;i++){
    if(s[i]!='8') r++;
    else break;
  }
  if(r<=mymoves){
    cout <<"YES\n";
  }
  else cout <<"NO\n";
}
