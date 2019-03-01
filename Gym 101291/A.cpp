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

int lcs[60][60];
int main()
{
  string t="-abcdefghijklmnopqrstuvwxyz";
  string s;
  cin >> s;
  s.insert(s.begin(),'-');
  int n=s.size();
  int m=t.size();
  for(int i=1;i<n;i++)for(int j=1;j<m;j++)
  {
    if(s[i]==t[j])
      lcs[i][j]=lcs[i-1][j-1]+1;
    else
      lcs[i][j]=max(lcs[i][j-1],lcs[i-1][j]);
  }
  cout << 26-lcs[n-1][m-1]<<endl;
}
