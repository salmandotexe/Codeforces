#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int a[3];
    int b[3];
    for (int i = 0; i<3; i++){
        cin >> a[i];
    }
    for (int i = 0; i<3; i++){
        cin >> b[i];
    }
    sort (a, a+3);
    sort (b, b+3);
    if ((a[2]*a[2]) == (a[0]*a[0] + a[1]*a[1])){
        for (int i = 0; i<3; i++){
            if (a[i] != b[i]){
                return cout << "NO\n", 0;
            }
        }
        cout << "YES\n";
    }
    else {
        cout << "NO\n";
    }
    return 0;
}
