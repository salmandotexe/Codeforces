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


const int nax = 1e4+5;
int ara[nax];
int n, k;
ll sum;

int main ()
{
    #ifdef Lollipop
    freopen ("input.txt", "r", stdin);
    //freopen ("output.txt", "w", stdout);
    #endif
	int t;
	scanf ("%d", &t);
	while (t--){
        scanf ("%d %d", &n, &k);
        for (int i = 0; i<n; i++){
            scanf ("%d", &ara[i]);
        }
        sort(ara, ara+n);
        bool zero = false;
        for (int i = 0; i<n; i++){
            if (ara[i] == 0){
                zero = true;
                break;
            }
            else if (ara[i] < 0 && k){
                ara[i] = ara[i] * (-1);
                k--;
            }
            else{
                break;
            }
        }
        sort(ara, ara+n);
        sum = 0;
        if (zero){
            for (int i = 0; i<n; i++){
                sum += ara[i];
            }
        }
        else{
            if (k & 1){
                sum -= ara[0];
                for (int i = 1; i<n; i++){
                    sum += ara[i];
                    trace(sum);
                }
            }
            else{
                for (int i = 0; i<n; i++){
                    sum += ara[i];
                }
            }
        }
        printf ("%lld\n", sum);
	}
    return 0;
}
