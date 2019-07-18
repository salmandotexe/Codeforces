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
 
 
vll v(100005),w(100005);
int n;
ll dp[100005][3];
ll f(int idx, int st)
{
    if(idx==-1) return max(f(0,0),f(0,1));
    if(idx>n) return 0;
    if(dp[idx][st]!=-1) return dp[idx][st];
    ll mx=0;
    if(st==0)
        mx=max(f(idx+1,0),v[idx]+f(idx+1,1));
    if(st==1)
        mx=max(f(idx+1,1),w[idx]+f(idx+1,0));
    return dp[idx][st]=mx;
}
int main()
{
    mem(dp,-1);
    //freopen("in.txt","r",stdin);
    fast_cin
    cin >> n;
    for(int i=0;i<n;i++) cin >> v[i];
    for(int i=0;i<n;i++) cin >> w[i];
    ll ans=0;
    ans=(f(-1,-1));
    cout << ans << endl;
}
