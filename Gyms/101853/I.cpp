#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int T;
    scanf("%d",&T);
    while(T--)
    {
        ll a,b,d;
        scanf("%lld%lld%lld",&a,&b,&d);

        double ans = d*d;

        ans/=2;
        printf("%.9lf\n",ans);
    }
}
