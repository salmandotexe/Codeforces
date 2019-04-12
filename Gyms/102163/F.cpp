#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    scanf("%d", &t);
    for (int i=0; i< t; i++) {
        long long a, b;
        scanf("%lld %lld", &a, &b);
        if (b>a) printf("0\n");
        else {
        a-=b;
        long long ans=a/6;
        if (a%6!=0) ans++;

        printf("%lld\n", ans);}
    }
    return 0;
}
