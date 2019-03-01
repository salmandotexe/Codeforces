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
  int n,k;
  cin >> n >> k;
  ll res=0,pen=0;
  priority_queue < ll, std::vector<ll>, std::greater<ll> > pq;	// mnheap.push(), mnheap.top(), mnheap.pop()
  for(int i=0;i<k;i++)
  {
    int x;
    cin >> x;
    pq.push(x);
    if(i==k-1)
    {
      res+=pq.top();
      pen+=res;
      pq.pop();
    }
  }
  for(int i=k;i<n;i++)
  {
    int x;
    cin >> x;
    pq.push(x);
    res+=pq.top();
    pen+=res;
    pq.pop();
  }
  while(!pq.empty())
  {
    res+=pq.top();
    pen+=res;
    pq.pop();
  }
  cout << pen<<endl;
}
