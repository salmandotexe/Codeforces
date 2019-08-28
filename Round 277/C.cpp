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
 
int n,p;
int main()
{
    fast_cin
    cin >> n >> p;
    string s;
    cin >> s;
    vi dp(n+2);
 
    for(int i=0;i<n;i++){
        dp[i+1]=(s[i]-s[n-i-1] +26)%26;
        dp[i+1]=min(dp[i+1],26-dp[i+1]);
    }
 
    int mn=n,mx=1;
 
    int res=0;
    for(int i=1;i<=n/2;i++){
        if(dp[i]==0) continue;
        res+=dp[i];
        mn=min(mn,i);
        mx=max(mx,i);
    }
    if(p>=n/2) p=n-p+1;
 
    if(res==0){
        cout << 0 << endl;
        exit(0);
    }
    if(p>mx){
        res+=(p-mn);
        cout << res << endl;
        exit(0);
    }
    if(p<mn){
        res+=(mx-p);
        cout << res << endl;
        exit(0);
    }
    cout << res + mx - mn + min((mx-p), (p-mn)) << endl;    //if at p go to mn then go to mx
}
