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
  vector<string> names(n);
  for(int i=0;i<n;i++) cin >> names[i];
  map<char,int> N;
  N['A']=1;
  N['P']=1;
  N['O']=1;
  N['R']=1;
  N['B']=2;
  N['M']=2;
  N['S']=2;
  N['D']=3;
  N['G']=3;
  N['J']=3;
  N['K']=3;
  N['T']=3;
  N['W']=3;
  int res=0;
  int pos=1;
  for(auto a:names)
  {
    res+=abs(N[a[0]]-pos);
    pos=N[a[0]];
  }
  cout <<res<<endl;

}
