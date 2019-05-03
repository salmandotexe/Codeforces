#include <bits/stdc++.h>
#define ll long long int
#define vi vector<int>
#define vll vector<ll>
#define vvi vector < vi >
#define pii pair<int,int>
#define pll pair<long long, long long>
#define mod 1000000007
#define inf 1999
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

ostream& operator << (ostream &out, vector<ll> &v) { for(auto a:v) out << a<<" "; out<<endl; }


int get(int idx, vi v)
{
  v.erase(v.begin()+idx);
  int del=0;
  for(int i=1;i<v.size();i++)
  {
    del=max(v[i]-v[i-1],del);
  }
  return del;
}
int main()
{
  fast_cin
  int n;
  cin >> n;
  vi v(n);
  for(int i=0;i<n;i++) cin >> v[i];

  int minimum=inf;
  for(int i=0;i<n;i++){
    if(i!=0 && i!=n-1)
      minimum=min(minimum,get(i,v));
  }
  cout << minimum<<endl;

}
