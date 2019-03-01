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

int arr[int(1e5)+5];

int main()
{
  int n,k,r,a,x;
  cin >> n >> k >> r;
  for(int i=0;i<k;i++)
  {
    cin >> x;
    arr[x]=1;
  }
  int cnt=0;
  int res=0;
  int last=0;
  for(int i=1;i<=r;i++)
  {
    if(arr[i]==1)
    {
      last=max(last,i);
      cnt++;
    }
  }

  if(cnt<2)
  {
    for(int i=r;i>=1;i--)
    {
      if(arr[i]!=1)
      {
        cnt++;
        arr[i]=1;
        res++;
        last=max(last,i);
        if(cnt>=2)
          break;
      }
    }
  }
  //cout<<res<< " at "<< last<<endl;
  for(int i=1,j=i+r;j<=n;i++,j++)
  {
    if(arr[i]==1)
      cnt--;
    if(arr[j]==1)
      cnt++;
    if(cnt<2)
    {
      arr[j]=1;
      cnt++;
      res++;
    }
  }
  cout <<res<<endl;
}
