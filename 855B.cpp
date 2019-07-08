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

ostream& operator << (ostream &out, vector<ll> &v) { for(auto a:v) out << a<<" "; out<<endl; }

int main()
{
    //freopen("in.txt","r",stdin);
    ll p,q,r;
    fast_cin;
    int n;
    cin >> n >> p >> q >> r;
    vll v(n);
    for(int i=0;i<n;i++) cin >> v[i];

    vll dp(n,-inf),dp2(n,-inf),dp3(n,-inf);

    for(int i=0;i<n;i++)
    {
        if(i==0)
            dp[i]=p*v[i];
        else dp[i]=max(dp[i-1],p*v[i]);
    }

    for(int i=0;i<n;i++)
    {
        if(i==0)
            dp2[i]=dp[i]+q*v[i];
        else dp2[i]=max(dp2[i-1],q*v[i]+dp[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(i==0)
            dp3[i]=dp2[i]+r*v[i];
        else dp3[i]=max(dp3[i-1],r*v[i]+dp2[i]);
    }
    cout << dp3[n-1]<<endl;

}
