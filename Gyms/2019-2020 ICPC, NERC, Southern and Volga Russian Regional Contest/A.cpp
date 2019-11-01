#include <bits/stdc++.h>

using namespace std;

#define SIZE 100005

int N, M;

int ara[SIZE], pos[SIZE];

int mn[SIZE], mx[SIZE];

int main()
{
    #ifdef forthright48
    freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    #endif

    scanf("%d %d", &N, &M);

    for(int i=1; i<=N; i++) {
        ara[i] = i;
        pos[i] = i;

        mn[i] = i;
        mx[i] = i;
    }

    for(int i=0; i<M; i++) {
        int a;
        scanf("%d", &a);
        if(pos[a]!=1) {
            if(N>1) {
                int A = a;
                int newPosA = pos[a]-1;
                int B = ara[pos[a]-1];
                int newPosB = pos[a];

                ara[newPosA] = A;
                ara[newPosB] = B;

                pos[A] = newPosA;
                pos[B] = newPosB;

                mn[A] = min(mn[A], newPosA);
                mx[B] = max(mx[B], newPosB);
            }
        }
    }

    for(int i=1; i<=N; i++) {
        printf("%d %d\n", mn[i], mx[i]);
    }

    return 0;
}
