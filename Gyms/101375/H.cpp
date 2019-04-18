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
  int lo=1;
  int hi=1e9;
  char x;
  while(1)
  {
    int mid=(lo + hi)/2;
    if(lo<hi)
      cout << "Q "<<mid<<endl;
    else cout << "Q "<<hi<<endl;

    fflush(stdout);

    cin >> x;
    if(x=='=') break;
    if(x=='<')  //ans<mid
    {
      hi=mid-1;
    }
    else if (x=='>')
    {
      lo=mid+1;
    }
  }

}
