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
#define OUT(x) for(auto a:x) cout << a << " "; cout << endl;
#define OK cout << "@===================ok===================@" <<endl;
#define WTF cout <<"< "<<lo<<" | "<< hi <<" >" << endl;
 
using namespace std;
 
inline bool cmp(const ll &a, const ll &b){
    //a comes before b if:
    return (a*a < b*b);
}
bool visited[100005];
 
int main()
{
    fast_cin
    int n;
    cin >> n;
    vll v(n);
    for(int i=0;i<n;i++) cin >> v[i];
    sort(all(v),cmp);
    //OUT(v);
    ll distsq=0;
    int last=0;
    ll X=0;
    ll Y=0;
 
    if(n%2==0){
        int l=n-1;
        int ff=0;
        for(int i=0;i<n/2;i++){
            X+=v[l--];
        }
        for(int i=0;i<n/2;i++){
            Y+=v[ff++];
        }
        distsq=max(distsq,X*X+Y*Y);
    }
    else{
        int l=n-1;
        int ff=0;
        for(int i=0;i<n/2;i++){
            X+=v[l--];
        }
        for(int i=0;i<n/2;i++){
            Y+=v[ff++];
        }
        X+=v[ff];
        ll D1=X*X+Y*Y;
        X-=v[ff];
 
        Y+=v[ff];
        distsq=max(distsq,D1);
        distsq=max(distsq,X*X+Y*Y);
    }
    cout << distsq << endl;
 
 
}
