
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

#define s second
#define fast_cin ios_base::sync_with_stdio(false);cin.tie(NULL);
#define precise fixed(cout);cout<<setprecision(16);
using namespace std;

//ostream& operator << (ostream &out, vector<int> &v) { for(auto a:v) out << a<<" "; out<<endl; }

int n;
ll dp[105][210];
ll f(int sum, int x)
{
    if(sum>n) return 0;
    if(sum==n) return x!=0;

    if(dp[sum][x]!=-1) return dp[sum][x];
    ll res=0;
    ll tmp=0;
    for(int i=1;i+sum<=n;i++)
    {
        tmp= f(i+sum, x xor i) %mod;
        res+=tmp;
        res%=mod;
    }
    return dp[sum][x]=res;
}

int main()
{
    fast_cin
    int T;
    cin >> T;
    for(int tc=1;tc<=T;tc++)
    {
        mem(dp,-1);
        cin >> n;
        cout <<f(0,0)<<endl;
    }
}
