#include <bits/stdc++.h>
using namespace std;
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

int Set(int mask, int pos){
    return mask | (1 << pos);
}
int Reset(int mask, int pos){
    return mask & ~(1 << pos);
}
bool Check(int mask, int pos){
    return (bool)(mask & (1 << pos));
}

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

const int INF = 1e9+9;

string s;


int main ()
{
    #ifdef Lollipop
        //freopen ("input.txt", "r", stdin);
        //freopen ("output.txt", "w", stdout);
    #endif

    cin >> s;
    int len = s.size();
    for (int i = 0; i < len; i++){
        if (s[i] == s[i+1] && i + 1 < len){
            if (i + 2 < len){
                for (char ch = 'a'; ch <= 'z'; ch++){
                    if (ch != s[i] && ch != s[i+2]){
                        s[i+1] = ch;
                        break;
                    }
                }
            }
            else{
                for (char ch = 'a'; ch <= 'z'; ch++){
                    if (ch != s[i]){
                        s[i+1] = ch;
                        break;
                    }
                }
            }
        }
    }
    cout << s << endl;
    return 0;
}
