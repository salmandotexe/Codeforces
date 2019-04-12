#include <bits/stdc++.h>
//#include <ext/pb_ds/tree_policy.hpp>
//#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
//using namespace __gnu_pbds;
#define ll                  long long int
#define ull                 unsigned long long int
#define ld                  long double
#define fi                  first
#define se                  second
#define pb                  push_back
#define pbb                 pop_back
#define mp                  make_pair
#define popcount            __builtin_popcountll
#define pii     	        pair<int,int>
#define all(x)              x.begin(), x.end()
#define uniq(x)             x.erase(unique(x.begin(),x.end()),x.end())
#define mem(array, value)   memset(array, value, sizeof(array))
#define lcm(a,b)            (abs(a)/gcd(a,b))*abs(b)
#define random(a, b)        ((((rand() << 15) ^ rand()) % ((b) - (a) + 1)) + (a))
#define PI      	        2*acos(0.0)
#define EPS     	        1e-8
#define line                cout << "\n==========\n"
#define fastRead 	        ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define trace(...)          __f( #__VA_ARGS__ , __VA_ARGS__ )
template <typename Arg1>
void __f(const char* name, Arg1&& arg1){
    cerr << name << " : " << arg1 << "\n";
}
template <typename Arg1, typename... Args>
void __f(const char* names, Arg1&& arg1, Args&&... args){
    const char* comma = strchr(names + 1, ',');
    cerr.write(names, comma - names) << " : " << arg1 << " , ";
    __f(comma + 1, args...);
}
//typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> orderedSet;

//int dx[] = {-1, 0, 1, 0},                  dy[] = {0, 1, 0, -1};                  // 4 Direction
//int dx[] = {-1, 0, 1, 0, -1, 1, 1, -1},    dy[] = {0, 1, 0, -1, -1, 1, -1, 1};    // 8 Direction
//int dx[] = {-2, -1, 1, 2, 2, -1, 1, -2},   dy[] = {1, 2, 2, 1, -1, -2, -2, -1};   // Knight Direction

inline ll gcd(ll a, ll b){
    a = abs(a), b = abs(b);
    while (b)
        a = a % b, swap (a, b);
    return a;
}
inline ll power(ll a, ll p){
    ll res = 1, x = a;
    while (p){
        if (p & 1) res = (res * x);
        x = (x * x), p >>= 1;
    }
    return res;
}
inline ll mul_mod(ll a, ll p, ll m){
    ll res = 0, x = a%m;
    while (p){
        if (p & 1) res = (res + x) % m;
        x = (x << 1) % m, p >>= 1;
    }
    return res;
}
inline ll big_mod(ll a, ll p, ll m){
    ll res = 1 % m, x = a % m;
    while (p){
        if (p & 1) res = (res * x) % m;
        x = (x * x) % m, p >>= 1;
    }
    return res;
}
ll ext_gcd(ll A, ll B, ll *X, ll *Y ){
    ll x2, y2, x1, y1, x, y, r2, r1, q, r;
    x2 = 1, y2 = 0;
    x1 = 0, y1 = 1;
    for (r2 = A, r1 = B; r1 != 0; r2 = r1, r1 = r, x2 = x1, y2 = y1, x1 = x, y1 = y ) {
        q = r2 / r1, r = r2 % r1;
        x = x2 - (q * x1), y = y2 - (q * y1);
    }
    *X = x2; *Y = y2;
    return r2;
}
inline ll mod_inv(ll a, ll m) {
    ll x, y;
    ext_gcd(a, m, &x, &y);
    x %= m;
    if ( x < 0 ) x += m;
    return x;
}

const int mod = 1e9+7;
const int nax = 1003;
ll ara[nax];
ll dp[nax][nax];
vector<ll> v;
int n;
int LIS;

ll call(int idx, int cnt)
{
    if (cnt == LIS){
        return 1;
    }
    if (idx == n){
        return 0;
    }
    if (dp[idx][cnt] != -1){
        return dp[idx][cnt];
    }
    ll res1, res2;
    res1 = res2 = 0;
    for (int i = idx+1; i<n; i++){
        if (ara[i] > ara[idx]){
            res1 = (res1 + call(i, cnt+1))%mod;
        }
    }
    //res2 = call(idx+1, 1);
    return dp[idx][cnt] = res1+res2;
}

int main ()
{
    #ifdef Lollipop
        freopen ("input.txt", "r", stdin);
        //freopen ("output.txt", "w", stdout);
        double start_time = clock();
    #endif

    int t;
    scanf ("%d", &t);
    while (t--){
        v.clear();
        ll x;
        scanf("%d", &n);
        for(int i=0;i<n;i++)
        {
            scanf ("%lld", &x);
            ara[i] = x;
            auto it=lower_bound(all(v),x);
            if(it==v.end())
            {
                v.push_back(x);
            }
            else{
                *it=x;
            }
        }
        LIS = v.size();
        if (LIS == 1){
            printf ("%d %d\n", 1, n);
            continue;
        }
        mem(dp, -1);
        ll LISs = 0;
        for (int i = 0; i<n; i++){
            LISs = (LISs + call(i, 1))%mod;
        }
        LISs %= mod;
        printf ("%d %ld\n", LIS, LISs);
    }
    #ifdef Lollipop

        double end_time = clock();
        double val = (end_time-start_time)/CLOCKS_PER_SEC;
        printf("\nTime = %f\n", val);
    #endif
    return 0;
}
