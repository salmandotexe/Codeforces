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

char arr[60][60];

int main()
{
  int n;
  cin >> n;
  int gaps=0;
  int total=n*n;
  for(int i=1;i<=n;i++)
  {
    for(int j=1;j<=n;j++)
    {
      cin >> arr[i][j];
      if(arr[i][j]=='.') gaps++;
    }
  }
  for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
      if(arr[i][j]=='.' &&
         arr[i+1][j]=='.' &&
         arr[i-1][j]=='.' &&
         arr[i][j+1]=='.' &&
         arr[i][j-1]=='.')
         {
           gaps-=5;
           arr[i][j]=arr[i+1][j]=arr[i-1][j]=arr[i][j+1]=arr[i][j-1]='x';
         }
    }
  }
  if(gaps==0) cout <<"YES\n";
  else cout <<"NO\n";

}
