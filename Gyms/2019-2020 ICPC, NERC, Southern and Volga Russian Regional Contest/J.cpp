#include <bits/stdc++.h>
using namespace std;
#define inf 10000000000
#define ll long long

const int nax = 3e4 + 5;
ll height[nax];
ll n, k;

bool check(ll mid)
{
    ll extra = 0;
    ll cnt = 0;
    for (int i = 1; i<= n; i++){
        ll cur = height[i] + extra;
        cnt += cur / mid;
        extra = min(height[i], cur % mid);
    }
    if (cnt >= k){
        return true;
    }
    return false;
}

int main()
{
    #ifdef forthright48
    freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    #endif

    int t;
    cin >> t;
    while (t--){
        cin >> n >> k;
        for (int i = 1; i <= n; i++){
            cin >> height[i];
        }

        ll lo = 1;
        ll hi = 1e18;
        ll res = 0;

        while (lo <= hi){
            ll mid = (lo + hi) >> 1;

            if (check(mid)){
               res = mid;
               lo = mid + 1;
            }

            else{
                hi = mid - 1;
            }
        }
        cout << res * k << endl;
    }
    return 0;
}
