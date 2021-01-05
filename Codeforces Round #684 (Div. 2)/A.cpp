#include <bits/stdc++.h>
#define ll long long int
#define vi vector<int>
#define vll vector<ll>
#define vvi vector < vi >
#define pii pair<int,int>
#define pll pair<long long, long long>
#define inf 1000000000000000001
#define mod 1000000007
#define all(c) c.begin(),c.end()
#define mp(x,y) make_pair(x,y)
#define mem(a,val) memset(a,val,sizeof(a))
#define eb emplace_back
#define pb push_back
#define f first
#define s second
#define fast_cin ios_base::sync_with_stdio(false);cin.tie(NULL);
#define precise fixed(cout);cout<<setprecision(16);
#define Set(N,p) N=((N)|((1LL)<<(p)))
#define Reset(N,p) N=((N)&(~((1LL)<<(p))))
#define Check(N,p) (!(((N)&((1LL)<<(p)))==(0)))
#define POPCOUNT __builtin_popcountll
#define RIGHTMOST __builtin_ctzll
#define LEFTMOST(x) (63-__builtin_clzll((x)))
#define NUMDIGIT(x,y) (((vlong)(log10((x))/log10((y))))+1)
#define OUT(x) for(auto a:x) cout << a << " "; cout << endl;
#define OK cout << "@===================ok===================@" <<endl;
#define WTF cout <<"< "<<lo<<" | "<< hi <<" >" << endl;

using namespace std;
ll n,h;
ll c[3];

const int maxn=2005;
ll dp[maxn];
int vis[maxn];
int tc;
string s;

ll f(int i){
    if(i>=n) return 0;
    if(vis[i]==tc) return dp[i];
    vis[i]=tc;
    ll res=inf;
    res=min(res,c[s[i]-'0']+f(i+1));
    if(s[i]=='0'){
        res=min(res,c[1]+h+f(i+1));
    }
    else{
        res=min(res,c[0]+h+f(i+1));
    }
    return dp[i]=res;
}

int main()
{
    fast_cin;
    int T;
    cin >> T;
    for(tc=1;tc<=T;tc++)
    {
        cin >> n >> c[0]>> c[1] >> h;
        cin >> s;
        auto ans=f(0);
        cout << ans <<"\n";
    }
}
