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

const int maxn=2e5+5;

int v[maxn];
int len[maxn];
bool visited[maxn];
bool vis[maxn];

int dfs(int src){
    if(visited[src]) return 0;
    else{
        visited[src]=1;
        len[src]=max(len[src],1+dfs(v[src]));
    }
}
int dfs2(int src){
    if(!vis[src]){
        vis[src]=1;
        len[src]=max(len[v[src]],len[src]);
        len[v[src]]=max(len[v[src]],len[src]);
        dfs2(v[src]);
    }
}

int main()
{
    fast_cin
    int T;
    cin >> T;
    for(int tc=1;tc<=T;tc++)
    {
        mem(v,0);
        mem(len,0);
        mem(visited,0);
        mem(vis,0);
        int n;
        cin >> n;

        for(int i=1;i<=n;i++) cin >> v[i];
        for(int i=1;i<=n;i++){
            if(!visited[i]) dfs(i);
        }
        for(int i=1;i<=n;i++){
            if(!vis[i]) dfs2(i);
        }
        for(int i=1;i<=n;i++) cout << len[i]<<" ";
        cout << endl;
    }
}
