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

const int maxn=2e5+5;
ll t[4*maxn];
int n;
ll v[maxn];

void build(int i=1, int lo=0, int hi=n-1){
    if(lo>=hi){
        t[i]=v[lo];
        return;
    }
    int mid=(lo+hi)/2;
    build(2*i,lo,mid);
    build(2*i+1,mid+1,hi);
    t[i]=min(t[2*i],t[2*i+1]);
}

ll get(int a, int b,int i=1, int lo=0, int hi=n-1){
    if(b<lo || a>hi) return inf;
    if(a<=lo && hi<=b){
        return t[i];
    }
    int mid=(lo+hi)/2;
    ll ans=min(get(a,b,2*i,lo,mid),get(a,b,2*i+1,mid+1,hi));
    return ans;
}


int main()
{
    fast_cin;
    int T;
    cin >> T;
    for(int tc=1;tc<=T;tc++)
    {
        cin >> n;
        for(int i=0;i<n;i++){
            cin >> v[i];
        }
        build();
        vll pref(n,-inf);
        vll suff(n,-inf);

        for(int i=0;i<n;i++){
            if(i-1>=0){
                pref[i]=max(pref[i],pref[i-1]);
            }
            pref[i]=max(pref[i],v[i]);
        }

        for(int i=n-1;i>=0;i--){
            if(i+1<=n-1){
                suff[i]=max(suff[i],suff[i+1]);
            }
            suff[i]=max(suff[i],v[i]);
        }
        vector<pll> temp;
        for(int i=0;i<n;i++){
            temp.pb({suff[i],i});
        }
        sort(all(temp));
        bool ans=0;
        ll X=0,Y=0,Z=0;
        for(int i=0;i<n;i++){
            ll el=pref[i];
            pll _x(el,i+2);
            auto lb=lower_bound(all(temp), _x);
            int cnn=2;
            while(lb!=temp.end() && lb->first==pref[i]){
                if(cnn<0) break;
                if(lb->first==pref[i] && get(i+1,(lb->s)-1)==pref[i]){
                    X = i+1;
                    Y = ((lb->s)-1)-(i+1) + 1;
                    Z = n-X-Y;
                    if(X>0 && Y>0 && Z>0 && X+Y+Z==n){
                        ans=1;
                        break;
                    }
                }
                lb++;
                cnn--;
            }
        }
        if(ans){
            cout <<"YES\n";
            cout << X <<" "<< Y <<" "<< Z<< "\n";
        }
        else{
            cout <<"NO\n";
        }
    }
}
