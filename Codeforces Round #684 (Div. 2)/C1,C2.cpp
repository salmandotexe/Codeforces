#include <bits/stdc++.h>
#define ll long long int
#define vi vector<int>
#define vll vector<ll>
#define vvi vector < vi >
#define pii pair<int,int>
#define pll pair<long long, long long>
#define inf 1000000000000000001
#define mod 1000000007
#define all(c) c.begin(),c.end()
#define mp(x,y) make_pair(x,y)
#define mem(a,val) memset(a,val,sizeof(a))
#define eb emplace_back
#define pb push_back
#define f first
#define s second
#define fast_cin ios_base::sync_with_stdio(false);cin.tie(NULL);
#define precise fixed(cout);cout<<setprecision(16);
#define Set(N,p) N=((N)|((1LL)<<(p)))
#define Reset(N,p) N=((N)&(~((1LL)<<(p))))
#define Check(N,p) (!(((N)&((1LL)<<(p)))==(0)))
#define POPCOUNT __builtin_popcountll
#define RIGHTMOST __builtin_ctzll
#define LEFTMOST(x) (63-__builtin_clzll((x)))
#define NUMDIGIT(x,y) (((vlong)(log10((x))/log10((y))))+1)
#define OUT(x) for(auto a:x) cout << a << " "; cout << endl;
#define OK cout << "@===================ok===================@" <<endl;
#define WTF cout <<"< "<<lo<<" | "<< hi <<" >" << endl;

using namespace std;

const int maxn=105;
int G[maxn][maxn];
vector<pii> ans;

queue<pii> s[2];

void err(int x){
    if(s[x].empty()) return;
    ans.pb(s[x].front());
    s[x^1].push(s[x].front()); s[x].pop();
}


void chk(int i, int j){
    s[0]=queue<pii>();
    s[1]=queue<pii>();

    s[G[i][j]].push({i,j});
    s[G[i+1][j]].push({i+1,j});
    s[G[i][j+1]].push({i,j+1});
    s[G[i+1][j+1]].push({i+1,j+1});

    if(s[1].size()==0){
        return;
    }
    if(s[1].size()==4){
        err(1);
        err(1);
        err(1);

        err(0);
        err(0);
        err(1);

        err(1);
        err(0);
        err(0);

        err(1);
        err(1);
        err(1);
        return;
    }
    if(s[1].size()==3){
        err(1);
        err(1);
        err(1);
        return;
    }
    if(s[1].size()==2){
        err(0);
        err(0);
        err(1);

        err(1);
        err(1);
        err(1);
        return;
    }

    if(s[1].size()==1){
        err(0);
        err(0);
        err(1);

        err(0);
        err(0);
        err(1);

        err(1);
        err(1);
        err(1);
        return;
    }
}
int main()
{
    fast_cin
    int T;
    cin >> T;
    for(int tc=1;tc<=T;tc++)
    {
        mem(G,0);
        ans.clear();
        s[0]=queue<pii>();
        s[1]=queue<pii>();

        int n,m;
        cin >> n >> m;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                char ch;
                cin >> ch;
                G[i][j]=(ch=='1');
            }
        }

        for(int i=1;i+1<=n;i++){
            for(int j=1;j+1<=m;j++){
                if(G[i][j] && G[i][j+1]){//11
                    ans.pb({i,j});//
                    ans.pb({i,j+1});//
                    ans.pb({i+1,j});
                    G[i][j]^=1;
                    G[i][j+1]^=1;
                    G[i+1][j]^=1;
                }
                else if(G[i][j]){
                    ans.pb({i,j});
                    ans.pb({i+1,j+1});
                    ans.pb({i+1,j});
                    G[i][j]^=1;
                    G[i+1][j+1]^=1;
                    G[i+1][j]^=1;
                }
                else if(G[i][j+1]){
                    ans.pb({i,j+1});
                    ans.pb({i+1,j+1});
                    ans.pb({i+1,j});
                    G[i][j+1]^=1;
                    G[i+1][j+1]^=1;
                    G[i+1][j]^=1;
                }
            }
        }
        int i=n-1;
        for(int j=1;j+1<=m;j++){
            if(j+1==m) break;
            if(G[i][j] && G[i+1][j]){
                ans.pb({i,j});
                ans.pb({i+1,j});
                ans.pb({i+1,j+1});

                G[i][j]^=1;
                G[i+1][j]^=1;
                G[i+1][j+1]^=1;
            }
            else if(G[i][j]){
                ans.pb({i,j});
                ans.pb({i,j+1});
                ans.pb({i+1,j+1});

                G[i][j]^=1;
                G[i][j+1]^=1;
                G[i+1][j+1]^=1;
            }
            else if(G[i+1][j]){
                ans.pb({i+1,j});
                G[i+1][j]^=1;

                ans.pb({i+1,j+1});
                G[i+1][j+1]^=1;

                ans.pb({i,j+1});
                G[i][j+1]^=1;
            }
        }
        {
            int i=n-1;
            int j=m-1;
            chk(i,j);
        }
        // for(int i=1;i<=n;i++){
        //     for(int j=1;j<=m;j++){
        //         cout << G[i][j] <<" ";
        //     }
        //     cout <<"\n";
        // }
        int res=ans.size();
        cout << res/3 <<"\n";
        for(auto &a:ans){
            cout << a.f <<" "<< a.s <<" ";
        }
        cout <<"\n";
    }
}
