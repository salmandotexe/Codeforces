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
  vi v(n+1),visited(n+1);
  for(int i=1;i<=n;i++)
  {
    cin >> v[i];
  }
  int i=1;
  int days=0;
  priority_queue < ll, std::vector<ll>, std::less<ll> > mxheap;	// mxheap.push(), mxheap.top(), mxheap.pop()
  for(int i=1;i<=n;i++)
  {
    visited[i]=1;
    mxheap.push(v[i]);
    if(visited[mxheap.top()]){
       days++;
    }
  }
  cout << days<<endl;
}
