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

ostream& operator << (ostream &out, vector<int> &v) { for(auto a:v) out << a<<" "; out<<endl; }

const int MAXN=150005;
bool prime[MAXN+5];
vi P;
int a[505][505];

void prec()
{
    memset(prime,true,sizeof(prime));
    prime[0]=prime[1]=false;
    for(int i=2; i*i <= 150005 ; i++) for(int j = i*i; j < 150005 ; j += i)
        prime[j] =false;
    for(int i=1;i<MAXN;i++)
        if(prime[i]) P.pb(i);
}
int main()
{
    prec();
    fast_cin
    int n,m;
    cin >> n >> m;

    auto get=[&](int &a)
    {
        int u=lower_bound(all(P),a)-P.begin();
        return min({abs(a-P[u]), abs(a-P[u+1])});
    };

    for(int i=1;i<=n;i++) for(int j=1;j<=m;j++) cin >> a[i][j];
    int res=9999999;
    for(int i=1;i<=n;i++) for(int j=1;j<=m;j++) a[i][j]=get(a[i][j]);

    // for(int i=1;i<=n;i++) {
    //     for(int j=1;j<=m;j++)
    //     {
    //         cout << a[i][j]<<" ";
    //     }
    //     cout << endl;
    // }

    for(int i=1;i<=n;i++)
    {
        int cur=0;
        for(int j=1;j<=m;j++)
        {
            cur+=a[i][j];
        }
        res=min(res,cur);
    }
    for(int j=1;j<=m;j++)
    {
        int cur=0;
        for(int i=1;i<=n;i++)
        {
            cur+=a[i][j];
        }
        res=min(res,cur);
    }
    cout << res << endl;
}
