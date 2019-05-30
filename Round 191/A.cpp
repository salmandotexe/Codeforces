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

int main()
{
    fast_cin
    int n;
    cin >> n;
    vi v(n+1),dp(n+2);
    for(int i=1;i<=n;i++) cin >> v[i];
    partial_sum(all(v),dp.begin());
    auto get = [&](int i, int j)
    {
        return dp[j]-dp[i-1];
    };

    int res=0;


    for(int i=1;i<=n;i++)
    {
        for(int j=i;j<=n;j++)
        {
            int mov=j-i+1-get(i,j); //mov=0 = no good move.
            if(mov!=0)
                res=max(res,get(1,i-1)+mov+get(min(j+1,n),n));
            else
                res=max(res,get(1,n)-1);
        }
    }
    cout << res << endl;

}
