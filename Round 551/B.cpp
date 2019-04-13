#include <bits/stdc++.h>
#define ll long long int
#define vi vector<int>
#define vll vector<ll>
#define vvi vector < vi >
#define pii pair<int,int>
#define pll pair<long long, long long>
#define mod 1000000007
#define inf (int)1e9
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

int grid[105][105];
int main()
{
  fast_cin
  int n,m,h;
  cin >> n >> m >> h;
  //front view
  vi front(m);
  for(int i=0;i<m;i++) cin >> front[i];
  vi left(n);
  for(int i=0;i<n;i++) cin >> left[i];
  for(int i=1;i<=n;i++) for(int j=1;j<=m;j++){
    cin >> grid[i][j];
  }

  for(int i=1;i<=n;i++) for(int j=1;j<=m;j++){
    if(grid[i][j])
    {
      grid[i][j]=left[i-1];
      grid[i][j]=min(grid[i][j],front[j-1]);
      // if(grid[i][j]==left[i-1])
      // {
      //   left[i-1]=inf;
      // }
      // else front[j-1]=inf;
    }
  }
  for(int i=1;i<=n;i++)
  {
     for(int j=1;j<=m;j++)
       cout << grid[i][j]<<" ";

     cout<<endl;
  }
}
