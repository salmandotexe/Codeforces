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
  string s1,s2;
  cin >> s1 >> s2;
  stringstream ss1(s1);
  stringstream ss2(s2);
  char C;
  int a,b,c,d;
  ss1 >> a >> C >> b;
  ss2 >> c >> C >> d;

  int h1=a*60+b;
  int h2=c*60+d;
  int del=h2-h1;
  h1+=(del)/2;
  //cout << h1/60<<":"<<h1%60<<endl;
  printf("%02d:%02d\n", h1/60,h1%60);
}
