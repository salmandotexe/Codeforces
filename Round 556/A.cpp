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
  int n,m,r;
  cin >> n >> m >> r;
  vi s(n);
  for(int i=0;i<n;i++) cin >> s[i];
  sort(all(s));
  vi b(m);
  for(int i=0;i<m;i++) cin >> b[i];
  sort(all(b));

  int shares=0;
  int cost =0;
  if(*max_element(all(b))>*min_element(all(s)))
  {
    int u=*min_element(all(s));
    int X=r/u;
    int mel=*max_element(all(b));
    cout << X*(mel-u) +r <<endl;
  }
  else cout << r <<endl;

}