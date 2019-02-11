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

vector<string > arr(101);
int main()
{
  int n,m;
  cin >> n >> m;
  for(int i=0;i<n;i++)
  {
    cin >> arr[i];
  }

  int res=0;

  for(int i=0;i<n-1;i++)
  {
    if(arr[i]>arr[i+1])
    {
      int j=-1;
      for(j=0;j<m;j++)
      {
        if(arr[i][j]>arr[i+1][j])
          break;
      }

      for (int k = 0; k < n; k++) arr[k][j]='0';
      res++;
      i=-1;
    }
  }
  cout <<res<<endl;
}
