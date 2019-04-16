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
  int n;
  cin >> n;
  set<int> s;
  int u;
  vi v;
  for(int i=0;i<n;i++) {
    cin >> u;
    v.pb(u);
    s.insert(u);
  }
  if((int)s.size()>3){
    cout <<-1<<endl;
    exit(0);
  }
  if(s.size()==1)
  {
    cout << 0 <<endl;
    exit(0);
  }
  if(s.size()==2)
  {
    auto it=s.begin();
    auto it2=it;
    it2++;
    int del=abs(*it2-*it);
    if(*it+del/2==*it2-del/2){
      cout << del/2 <<endl;
    }
    else cout <<del<<endl;
    exit(0);
  }
  sort(all(v));

  auto it=s.begin();
  int a=*it;
  it++;
  int b=*it;
  it++;
  int c=*it;
  if(c-b==b-a)
  {
    cout << c-b <<endl;
    exit(0);
  }
  else cout << -1 <<endl;
  return 0;

}
