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


int main()
{

  int n;
  cin >> n;
  vi v(n);
  PQ even,even1,odd,odd1;
  for(int i=0;i<n;i++) {
    cin >> v[i];
    if(v[i]%2==0){
      even.push(v[i]);
      even1.push(v[i]);
    }
    else {
      odd.push(v[i]);
      odd1.push(v[i]);
    }
  }
  ll res1=0;
  ll res2=0;
  bool ODD=1;

  while(1)
  {
    if(ODD){
      if(odd.empty()) break;
      odd.pop();
    }
    else{
      if(even.empty()) break;
      even.pop();
    }
    ODD=!ODD;
  }
  while(!odd.empty()){
    res1+=odd.top();
    odd.pop();
  }
  while(!even.empty()){
    res1+=even.top();
    even.pop();
  }

  ODD=0;
  while(1)
  {
    if(ODD){
      if(odd1.empty()) break;
      odd1.pop();
    }
    else{
      if(even1.empty()) break;
      even1.pop();
    }
    ODD=!ODD;
  }
  while(!odd1.empty()){
    res2+=odd1.top();
    odd1.pop();
  }
  while(!even1.empty()){
    res2+=even1.top();
    even1.pop();
  }
  cout << min(res1,res2)<<endl;
}
