#include <bits/stdc++.h>
#define ll long long int
#define vi vector<int>
#define vll vector<ll>
#define vvi vector < vi >
#define pii pair<int,int>
#define pll pair<long long, long long>
#define mod 1000000007
#define inf 1000000000000000001
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
    int n;
    cin >> n;
    if(n<=2)
    {
      cout << -1 << endl;
      exit(0);
    }
    else
    {
        vi v(n);
        for(int i=0;i<n;i++)
        {
          v[i]=i+1;
        }
        vi ans=v;
        while(1)
        {
          random_shuffle(all(v));
          vi anss=v;
          for(int i=0;i<n-1;i++) for(int j=i;j<n-1;j++){
            if(v[j]>v[j+1]) swap(v[j],v[j+1]);
          }
          if(v!=ans)
          {
            cout << anss;
            break;
          }
        }

    }
}
