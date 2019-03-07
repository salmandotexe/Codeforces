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
  vi v(n);
  for(int i=0;i<n;i++) cin >> v[i];
  for(int i=0;i<n;i++) v[i]%=k;
  map<int,int> m;

  for(auto &a:v)
  {
    m[a]++;
    a%=k;
  }
  int res=0;
  res+=2*(m[0]/2);
  //cout << v <<endl;
  for(int i=0;i<n;i++)
  {
    int a=v[i];
    if(m[a]>0 && m[k-a]>0)
    {
      if(a==k-a){
        if(m[k-a]==1)
          continue;
      }
      //cout << "match "<< a <<" " <<k-a<<endl;
      res+=2;
      m[a]--;
      m[k-a]--;
    }
  }
  //cout << v <<endl;
  cout <<res<<endl;
}
