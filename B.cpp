#include <bits/stdc++.h>
#define ll                  long long int
#define ull                 unsigned long long int
#define ld                  long double
#define fi                  first
#define se                  second
#define pb                  push_back
#define pbb                 pop_back
#define mp                  make_pair
#define pii     	        pair<int,int>
#define all(x)              x.begin(), x.end()
#define uniq(x)             x.erase(unique(x.begin(),x.end()),x.end())
#define mem(array, value)   memset(array, value, sizeof(array))
#define lcm(a,b)            (abs(a)/gcd(a,b))*abs(b)
#define PI      	        acos(-1.0)
#define INF     	        1e9
#define EPS     	        1e-8
#define MOD                 1000000007
#define MAX                 1000009
#define line                cout << "\n==========\n"
#define fastRead 	        ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
using namespace std;

//int dx4[4] = {0, -1, 0, 1};
//int dy4[4] = {-1, 0, 1, 0};
//int dx8[8] = {0, -1, -1, -1, 0, 1, 1, 1};
//int dy8[8] = {-1, -1, 0, 1, 1, 1, 0, -1};

inline ll gcd ( ll a, ll b ) {
    a = abs ( a ); b = abs ( b );
    while ( b ) { a = a % b; swap ( a, b ); } return a;
}

inline ll power ( ll a, ll p ) {
    ll res = 1, x = a;
    while ( p ) {
        if ( p & 1 ) res = ( res * x );
        x = ( x * x ); p >>= 1;
    }
    return res;
}

inline ll bigmod ( ll a, ll p, ll m ) {
    ll res = 1 % m, x = a % m;
    while ( p ) {
        if ( p & 1 ) res = ( res * x ) % m;
        x = ( x * x ) % m; p >>= 1;
    }
    return res;
}
/// <----------------------------------------------------------------------> ///

//teambicharchai
int main ()
{
    #ifdef forthright48
    freopen ( "input.txt", "r", stdin );
    //freopen ( "output.txt", "w", stdout );
    #endif // forthright48
    fastRead;
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        unordered_map<ll, ll> mp1, mp2;
        ll a, b;
        while (n--){
            cin >> a >> b;
            mp1[a]++;
            mp2[b]++;
        }
        ll ans = 0;
        unordered_map<ll, ll>:: iterator it;
        for (it = mp1.begin(); it!= mp1.end(); it++){
            ll x = it->fi;
            ans += (mp1[x] * mp2[x]);
        }
        cout << ans << endl;
    }
    return 0;
}
