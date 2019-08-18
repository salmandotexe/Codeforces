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
 
ll trans(ll &a)
{
    if(a==0)
        return 0;
    ll dist=0;
    if(a<0)
    {
        dist=abs(a+1);
        a=-1;
    }
    else if(a>0)
    {
        dist=abs(a-1);
        a=1;
    }
    return dist;
}
 
int main()
{
    //freopen("in.txt","r",stdin);
    fast_cin
    int n;
    cin >> n;
    vll v(n);
    for(int i=0;i<n;i++) cin >> v[i];
 
    //all of them to 1.
    ll ans=0;
    ll res=1;
    int zero=0;
    for(auto &a:v)
    {
        if(a==0) zero++;
        else{
            ans+=trans(a);
            res*=a;
            //cout <<"a is "<< a << endl;
        }
    }
 
    if(res==-1)
    {
        if(zero){
            ans+=1;
            ans+=(zero-1);
        }
        else{
            ans+=2;
        }
    }
    else
    {
        ans+=zero;
    }
    cout << ans << endl;
 
 
}
