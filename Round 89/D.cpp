#include <bits/stdc++.h>
#define ll long long int
#define vi vector<int>
#define vll vector<ll>
#define vvi vector < vi >
#define pii pair<int,int>
#define pll pair<long long, long long>
#define mod 100000000
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
 
int n1,n2,k1,k2;
ll dp[105][105][12][12];
 
ll f(int na,int nb, int ka, int kb)
{
    if(na<0 || nb<0) return 0;
    if(ka<0 || kb<0) return 0;
    if(na==0 && nb==0) return 1;
    if(dp[na][nb][ka][kb]!=-1) return dp[na][nb][ka][kb];
    ll r1=0;
    ll r2=0;
    if(ka>0)
        r1=f(na-1,nb,ka-1,k2);
    if(kb>0)
        r2=f(na,nb-1,k1,kb-1);
    return dp[na][nb][ka][kb]= (r1+r2)%mod;
}
int main()
{
    mem(dp,-1);
    cin >> n1 >> n2 >> k1 >> k2;
    ll ans=f(n1,n2,k1,k2);
    cout << ans << endl;
}
