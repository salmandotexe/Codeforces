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
}
