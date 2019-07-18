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
 
//ostream& operator << (ostream &out, vector<int> &v) { for(auto a:v) out << a<<" "; out<<endl; }
 
 
ll n,k;
 
ll nc2(const ll &n)
{
    return n*(n+1)/2;
}
const int maxn=1000006;
int main()
{
    
    cin >> n >> k;
    vll v;
    for(ll i=1;i<=maxn;i++){
        v.pb(nc2(i));
    }
    ll ans=0;
    for(int i=1;i<=v.size();i++)
    {
        //cout << i+1 <<"c2 =" << v[i-1] <<endl;
        //cout << "she ate " << v[i-1]-k << endl;
        if(v[i-1]-k >=0 && i+v[i-1]-k==n ) {
            ans=v[i-1]-k;
            break;
        }
    }
    cout << ans << endl;
 
}
