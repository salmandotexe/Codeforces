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
 
const int maxn=1e5+5;
int m[maxn];
bool visited[maxn];
bool late[maxn];
 
int main()
{
    //freopen("in.txt","r",stdin);
    fast_cin
    int n;
    cin >> n;
    vi v(n),w(n),ans(n+2);
    for(int i=0;i<n;i++) {
        cin >> v[i];
        m[v[i]]=i+1;
    }
    for(int i=0;i<n;i++) {
        cin >> w[i];
        ans[i+1]=m[w[i]];
    }
 
    int last=1;
    int j=1;
 
    int nas=0;
 
    for(int i=1;i<=n;i++){
        if(visited[i]) {
            continue;
        }
        for(int j=last;j<=n;j++){
            visited[ans[j]]=1;
            if(i!=ans[j]){
                nas++;
            }
            else{
                last=j+1;
                break;
            }
        }
    }
    cout << nas << endl;
 
}
