#include <bits/stdc++.h>
#define ll long long int
#define vi vector<int>
#define vll vector<ll>
#define vvi vector < vi >
#define pii pair<int,int>
#define pll pair<long long, long long>
#define mod 1000000007
#define inf 1000000000000000001
#define all(c) c.begin(),c.end()
#define mp(x,y) make_pair(x,y)
#define mem(a,val) memset(a,val,sizeof(a))
#define eb emplace_back
#define pb push_back
#define f first
#define s second
#define fast_cin ios_base::sync_with_stdio(false);cin.tie(NULL);
#define precise fixed(cout);cout<<setprecision(16);
using namespace std;
 
ll n,r,av;
// bool cmp(const pii &p1 , const pii &p2){
//     ll dels1=1LL*(r-p1.f) * p2.s;
//     ll dels2=1LL*(r-p2.f) * p1.s;
//     return dels1>dels2;
// }
 
bool cmp(const pii &p1 , const pii &p2){
    if(p1.s<p2.s) return 1;
    else if (p1.s==p2.s){
        return p2.f>p1.f;
    }
    return 0;
}
int main()
{
    //freopen("in.txt","r",stdin);
    fast_cin
    cin >> n >> r >> av;
    vector<pii> v(n);
    ll sum=0;
    for(int i =0; i <n; i++) cin >> v[i].f >> v[i].s,sum+=v[i].f;
    ll need=1LL*av*n - sum;
    ll ans=0;
    if(need>0)
    {
        sort(all(v),cmp);
        for(int i=0;i<n;i++){
            if(need<=0) break;
            ll possible = r-v[i].f;
            possible=min(possible,need);
            need-=possible;
            ans+=possible*v[i].s;
        }
    }
    cout << ans << endl;
}
