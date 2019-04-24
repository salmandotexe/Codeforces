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

string s;
string s1,s2;

int f(int i, int j, string &s)
{
  if(i>=j) return 0;
  if(s[i]=='<' && s[j]=='>')
    return 1+f(i+1,j-1,s);
  else return 0;
}
int main()
{
  fast_cin
  int T;
  cin >> T;
  for(int tc=1;tc<=T;tc++)
  {
    int n;
    cin >> n;

    cin >> s;
    s1=s;
    int ans=f(0,n-1,s);
    cout <<ans<<endl;
  }

}
