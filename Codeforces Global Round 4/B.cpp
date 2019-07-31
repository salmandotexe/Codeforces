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
 
//ostream& operator << (ostream &out, vector<int> &v) { for(auto a:v) out << a<<" "; out<<endl; }
const int maxn=1000006;
ll dp[maxn][6];
 
string s;
string t;
int n,m;
 
ll f(int i, int j)
{
    //cout << s[i] <<" : "<< t[j] << endl;
    if(i==0 && j==0) return 1;
    if(j==0) return 1;
    if(i<=0) return 0;
    if(dp[i][j]!=-1) return dp[i][j];
    if(s[i]==t[j])
        return dp[i][j]= f(i-1,j-1) + f(i-1,j);
    else return dp[i][j]= f(i-1,j);
}
int main()
{
    fast_cin
    mem(dp,-1);
    cin >> s;
    string proc="-";
    proc+=s;
    proc+='-';
    s=proc;
 
    int cnt=0;
    string rs="";
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='v') cnt++;
        if(s[i]!='v')
        {
            if(cnt) for(int u=1;u<cnt;u++) rs+='w';
            cnt=0;
            rs+=s[i];
        }
    }
    //cout << rs << endl;
    s=rs;
    t="-wow";
    n=s.size()-2;
    m=t.size()-1;
    ll ans=f(n,m);
    cout << ans << endl;
    //cout << s[1] <<" "<< t[1] << endl;
}
