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
#define precise fixed(cout);cout<<setprecision(8);
using namespace std;

int main()
{
    fast_cin
    int n;
    cin >> n;

    vi days(2000);
    const int maxn=1826;
    while(n--)
    {
        int a,b;
        cin >> a >> b;
        days[a]++;
        days[b+1]--;
    }
    int cur=0;
    for(int i=1;i<=maxn;i++){
        days[i]+=days[i-1];
    }
    for(int i=1;i<=maxn;i++){
        days[i]+=days[i-1];
    }
    
    auto get=[&](int i, int j)  //returns number of days present in here
    {
        return days[j]-days[i-1];
    };
    
    bool yes=1;
    for(int i=1;i+180-1<=maxn;i++)
    {
        int a=i;
        int b=i+180-1;
        
        int days=get(a,b);
        if(days>90) yes=0;
    }
    if(!yes) cout <<"No\n";
    else cout <<"Yes\n";
}
