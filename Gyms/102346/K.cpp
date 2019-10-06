#include <bits/stdc++.h>
#define ll long long int
#define vi vector<int>
#define vll vector<ll>
#define vvi vector < vi >
#define pii pair<int,int>
#define pll pair<long long, long long>
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
#define OUT(x) for(auto a:x) cout << a << " "; cout << endl;
#define OK cout << "@===================ok===================@" <<endl;
#define WTF cout <<"< "<<lo<<" | "<< hi <<" >" << endl;

using namespace std;
const int MOD = 1000000007;

struct linear_recurrence_berlekamp_massey {
        typedef long long LL;
        static const int SZ = 2e5 + 5;
        static const int MOD = 1e9 + 7; /// mod must be a prime
        LL m , a[SZ] , h[SZ] , t_[SZ] , s[SZ] , t[SZ];

        inline LL bigmod( LL b , LL p , LL MOD ) {
            LL res = 1%MOD , x = b%MOD;
            while( p ) {
                if ( p&1 ) res = (res * x)%MOD; x = (x * x)%MOD; p >>= 1;
            }
            return (res%MOD);
        }
        inline vector <LL> BM( vector <LL> &x ) {
            LL lf , ld;
            vector <LL> ls , cur;
            for( int i = 0; i < int(x.size()); ++i ) {
                LL t = 0;
                for( int j = 0; j < int(cur.size()); ++j ) t=(t + x[i-j-1] * cur[j])%MOD;
                if( (t - x[i])%MOD == 0 ) continue;
                if( !cur.size() ) {
                    cur.resize( i + 1 );
                    lf = i; ld = (t - x[i])%MOD;
                    continue;
                }
                LL k = -(x[i] - t) * bigmod( ld , MOD - 2 , MOD )%MOD;
                vector <LL> c(i - lf - 1);
                c.push_back( k );
                for( int j = 0; j < int(ls.size()); ++j ) c.push_back(-ls[j] * k%MOD);
                if( c.size() < cur.size() ) c.resize( cur.size() );
                for( int j = 0; j < int(cur.size()); ++j ) c[j] = (c[j] + cur[j])%MOD;
                if(i - lf + (int)ls.size() >= (int)cur.size() ) ls = cur, lf = i, ld = (t-x[i])%MOD;
                cur = c;
            }
            for( int i = 0; i < int(cur.size()); ++i ) cur[i] = (cur[i]%MOD + MOD)%MOD;
            return cur;
        }
        inline void mull( LL *p , LL *q ) {
            for( int i = 0;i < m + m; ++i ) t_[i] = 0;
            for( int i = 0; i < m; ++i ) if( p[i] )
                    for( int j = 0; j < m; ++j ) t_[i+j] = (t_[i+j] + p[i] * q[j])%MOD;
            for( int i = m + m - 1; i >= m; --i ) if( t_[i] )
                    for( int j = m - 1; ~j; --j ) t_[i-j-1] = (t_[i-j-1] + t_[i] * h[j])%MOD;
            for( int i = 0; i < m; ++i ) p[i] = t_[i];
        }
        inline LL calc( LL K ){
            for( int i = m; ~i; --i ) s[i] = t[i] = 0;
            s[0] = 1; if( m != 1 ) t[1] = 1; else t[0] = h[0];
            while( K ) {
                if( K&1 ) mull( s , t );
                mull( t , t ); K >>= 1;
            }
            LL su = 0;
            for( int i = 0; i < m; ++i ) su = (su + s[i] * a[i])%MOD;
            return (su%MOD + MOD)%MOD;
        }
        /// already calculated upto k , now calculate upto n.
        inline vector <LL> process( vector <LL> &x , int n , int k ) {
            auto re = BM( x );
            x.resize( n+1 );
            for( int i = k + 1; i <= n; i++ ){
                for( int j = 0; j < re.size(); j++ ){
                    x[i] += 1LL * x[i - j - 1]%MOD * re[j] % MOD; x[i] %= MOD;
                }
            }
            return x;
        }
        inline LL work( vector <LL> &x , LL n ) {
            if( n < int(x.size()) ) return x[n]%MOD;
            vector <LL> v = BM( x ); m = v.size(); if( !m ) return 0;
            for( int i = 0; i < m; ++i ) h[i] = v[i], a[i] = x[i];
            return calc( n )%MOD;
        }
} rec;

int main()
{
    vll v;
    v.pb(2);
    v.pb(24);
    v.pb(96);
    v.pb(416);
    v.pb(1536);
    v.pb(5504);
    v.pb(18944);
    v.pb(64000);
    v.pb(212992);
    v.pb(702464);
    v.pb(2301952);
    int n;
    cin >> n;
    ll ans= rec.work(v,n-1);    //has 4 states. so only 8 terms of recurrence are required.
    cout << ans << endl;
}
/*
int n;
const int maxn=25;

int visited[3][maxn];

inline bool ok(int r, int c){
    return (r>=1 & r<=2)&(c>=1 & c<=n);
}

int f(int r, int c, int rem) {
    if(rem==0) return 1;
    int ans=0;
    for(int i=-1;i<=1;i++) for(int j=-1;j<=1;j++){
        if(ok(i+r,j+c) && !visited[i+r][j+c]){
            visited[i+r][j+c]=1;
            ans+=f(i+r,j+c,rem-1);
            visited[i+r][j+c]=0;
        }
    }
    return ans;
}
int main()
{
    for(n=1;n<=20;n++){
        ll ans=0;
        for(int y=1;y<=2;y++){
            for(int x=1;x<=n;x++){
                mem(visited,0);
                visited[y][x]=1;
                ans+=f(y,x,n+n-1);
            }
        }
        cout <<"n= "<<n<<"| "<< ans << endl;
    }
}
*/
