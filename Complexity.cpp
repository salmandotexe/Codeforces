#include <bits/stdc++.h>
using namespace std;
int ara[150];
int main ()
{
    string s;
    cin >> s;
    int cnt = 0;
    for (int i = 0; s[i]; i++){
        int x = s[i];
        ara[x]++;
    }
    for (int i = 97; i<=122; i++){
        if (ara[i]){
            cnt++;
        }
    }
    int ans = 0;
    if (cnt-2 <= 0){
        cout << 0 << endl;
    }
    else {
        int x = cnt-2;
        vector<int> v;
        for (int i = 97; i<=122; i++){
            if (ara[i]){
                v.push_back(ara[i]);
            }
        }
        sort(v.begin(), v.end());
        for (int i = 0; i<x; i++){
            ans += v[i];
        }
        cout << ans << endl;
    }
    return 0;
}
