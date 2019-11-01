#include <bits/stdc++.h>
using namespace std;

const long long INF = 1e16;

int main ()
{
    long long area;
    cin >> area;
    long long res = INF;
    for (long long i = 1; i <= area; i++){
        long long a, b;
        if (area % i == 0){
            a = area / i;
            b = i;
            res = min(res, 2 * a + 2 * b);
        }
    }
    cout << res << endl;
    return 0;
}#include <bits/stdc++.h>
using namespace std;

#define inf 10000000000
#define LL long long

int main()
{
    #ifdef forthright48
    freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    #endif

    int tc;
    cin >> tc;
    for(int ks=1; ks<=tc; ks++) {
        LL a, b, c;
        cin >> a >> b >> c;

        if(b>=a && b>=c) {
            LL ret = (a+b+c)/3;
            if((a+b+c)%3!=0) ret++;
            cout << ret << "\n";
            continue;
        }

        if(a>c) swap(a, c);

        LL ret = inf;

        for(int i=0; i<=b; i++) {
            LL newA = a+i;

            LL newB = b-i;

            LL sum = c + newB;

            newB = sum/2;
            LL newC = sum/2;
            if(sum%2!=0) newC++;

            LL temp = newA;
            temp = max(temp, newB);
            temp = max(temp, newC);

            ret = min(ret, temp);
        }

        cout << ret << "\n";
    }

    return 0;
}
