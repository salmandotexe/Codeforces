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
  vi dp1(n),dp2(n);
  ll even=0,odd=0;
  for(int i =0; i <n; i++)
  {
    cin >> v[i];
    if(i&1)
    {
      odd+=v[i];
      dp1[i]=odd;
    }
    else
    {
      even+=v[i];
      dp1[i]=even;
    }
  }
  even=0,odd=0;
  for(int i =n-1; i>=0; i--)
  {
    if(i&1)
    {
      odd+=v[i];
      dp2[i]=odd;
    }
    else
    {
      even+=v[i];
      dp2[i]=even;
    }
  }
  int res=0;
  for(int i=1;i<n-1;i++)
  {
    if(dp1[i]+dp2[i+1]==dp1[i-1]+dp2[i])
      res++;
  }

  if(n%2==1)
  {
    if(even-v[0]== odd)
      res++;
    if(even-v[n-1]== odd)
      res++;
  }
  else
  {
    if(even-v[0]== odd)
      res++;
    if(odd-v[n-1]== even)
      res++;
  }

  cout <<res<<endl;



}
