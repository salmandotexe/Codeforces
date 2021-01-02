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
vll P;
const int maxn= sqrt(1e10)+50;
bool prime[maxn+10];

void prec(){
    mem(prime,true);
    prime[0]=prime[1]=0;
    for(int i=2;i<maxn;i++){
        for(int j=i+i;j<maxn;j+=i) prime[j]=0;
    }
    for(int i=2;i<maxn;i++){
        if(prime[i]) P.pb(i);
    }
}

vector<pll> pf(ll n){
    vector<pll> ans;
    for(auto p:P){
        if(n%p==0){
            ans.pb({p,0});
            while(n%p==0){
                ans.back().s++;
                n/=p;
            }
        }
    }
    if(n!=1) ans.pb({n,1});
    return ans;
}

int main()
{
    prec();
    fast_cin;
    int T;
    cin >> T;
    for(int tc=1;tc<=T;tc++)
    {
        ll n;
        cin >> n;
        auto ff=pf(n);

        ll mxpow=0;
        ll mxpowid=1;
        for(auto a:ff){
            if(a.s>mxpow){
                mxpow=a.s;
                mxpowid=a.f;
            }
        }
        cout << mxpow <<"\n";
        if(mxpow==1){
            cout << n <<"\n";
            continue;
        }
        else{
            for(int i=0;i<mxpow-1;i++){
                cout << mxpowid <<" ";
                n/=mxpowid;
            }
            cout << n <<"\n";
        }
    }
}
