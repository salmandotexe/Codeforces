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
#define PQ priority_queue < int, std::vector<int>, std::less<int> >
using namespace std;

ostream& operator << (ostream &out, vector<int> &v) { for(auto a:v) out << a<<" "; out<<endl; }

int freq[int(2e5)+10];

int main()
{
  fast_cin
  int n;
  cin >> n;
  vi v(n);
  bool can=1;
  for(int i=0;i<n;i++){
    cin >> v[i];
    freq[v[i]]++;
    if(freq[v[i]]>2) can=0;
  }
  vi inc,dec;
  if(!can){
    cout <<"NO\n";
    return 0;
  }
  else{
    for(auto a:v)
    {
      if(freq[a]==1) inc.pb(a);
      else if(freq[a]==2){
        freq[a]=0;
        inc.pb(a);
        dec.pb(a);
      }
    }
    sort(all(inc));
    sort(all(dec));
    cout <<"YES\n";
    cout << inc.size()<<endl;
    cout << inc;
    cout <<dec.size()<<endl;
    for(auto i=dec.rbegin();i!=dec.rend();i++){
      cout << *i<<" ";
    }
    cout <<endl;
  }


}
