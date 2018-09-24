#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n;
    cin >> n;
    long long ara[n];
    for (int i = 0; i<n; i++){
        cin >> ara[i];
    }
    sort (ara, ara+n);
//    for (int i = 0; i<n; i++){
//        cout << ara[i] << endl;
//    }
    long long ans = LLONG_MAX;
    for (int i = 0, j = n-1; i<n/2; i++, j--){
        ans = min(ans, (ara[i]+ara[j]));
    }
    cout << ans << endl;
    return 0;
}
