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

int main()
{
    fast_cin;
    int T;
    cin >> T;
    for(int tc=1;tc<=T;tc++)
    {
        ll x;
        int n,k;
        cin >> n >> k;
        vll a;
        for(int i=0;i<n;i++){
            for(int j=0;j<k;j++){
                cin >> x;
                a.pb(x);
            }
        }
        vector<vi> v(k, vi(n));
        int id=a.size()-1;
        int id2=0;
        int mdd=(n+1)/2;
        if(n%2) mdd--;
        ll res=0;

        for(int i=0;i<k;i++){
            for(int j=n-1;j>=0;j--){
                if(j>=(n+1)/2-1){
                    v[i][j]=a[id--];
                }
                else{
                    v[i][j]=a[id2++];
                }
            }
            //res+=v[i][];
        }

        for(int i=0;i<k;i++){
            res+=v[i][(n+1)/2-1];
        }
        cout << res <<"\n";
    }
}
