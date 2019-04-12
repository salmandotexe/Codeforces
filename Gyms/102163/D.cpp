#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    scanf("%d", &t);
    for (int i=0; i< t; i++) {
        int a, b;
        scanf("%d %d", &a, &b);
        if (a==b) printf("Iskandar\n");
        else if (a>b) printf("Bashar\n");
        else printf("Hamada\n");
    }
    return 0;
}
