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
  vi v(n);
  for(int i=0;i<n;i++) cin >> v[i];

  sort(all(v));
  vi delta;
  for(int i=2;i<=100;i++)
  {
    for(int j=0;j<n;j++)
    {
      if(v[j]%i==0)
      {
        for(int k=0;k<j;k++)
        {
          if(v[k]*i + v[j]/i < v[k]+v[j])
          {
            //cout <<"swap: "<< v[k] << " and "<< v[j]<<" ";
            delta.pb(abs((v[k]*i + v[j]/i) - (v[k]+v[j])));
            //v[k]*=i;
            //v[j]/=i;
            break;
          }
          else break;
        }
      }
    }
  }
  ll sub=0;
  if(!delta.empty())
    sub= *max_element(all(delta));

  ll res= accumulate(all(v),0);
  res-=sub;
  cout <<res<<endl;
}
