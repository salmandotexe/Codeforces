#include <bits/stdc++.h>
#define ll long long
#define vll vector<ll>
using namespace std;

bool issq(ll a)
{
    return floor(sqrt(a))==ceil(sqrt(a));
}
const int MAXN=1e6+5;
bool prime[MAXN+5];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    memset(prime,true,sizeof(prime));
    prime[0]=prime[1]=false;
    for(int i=2; i*i <= 1e6+5 ; i++) for(int j = i*i; j < 1e6+5 ; j += i)
      prime[j] =false;

    int n;
    cin >> n;
    vll v(n);
    for(int i=0;i<n;i++) cin >> v[i];
    for(auto &a:v)
    {
        if(a==1)
        {
            cout <<"NO\n";
            continue;
        }
        if(issq(a) && prime[(ll)sqrt(a)])
        {
            cout <<"YES\n";
        }
        else cout <<"NO\n";
    }
    return 0;
}
