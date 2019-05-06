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

const int maxn=1e5+5;

vi G[maxn];
vi ranks(maxn);

vi visited(maxn);

vi s(maxn);     //stores sum of number of nodes from x
vi dead(maxn);

void dfs(int par, int u)    //first dfs to precompute S.
{
	s[u]=1;
	for(auto& v : G[u])
	{
		if(v!=par && !dead[v])
		{
			dfs(u,v);
            s[u]+=s[v];
		}
	}
}

int centroid(int x)
{
    int i,p=-1;
    dfs(-1,x);
    int N_by_2 = s[x]/2;

    while(1){
        bool found=true;
        for(auto &v : G[x]){
            if(v!=p && !dead[v] && s[v]>N_by_2)    //this branch i have not visited, is heavier. go there until I find s[v]<=n/2
            {
                found=false;
                p=x;
                x=v;
                break;
            }
        }
        if(found) return x;
    }
}

bool can=1;

void f(int x, int rank)
{
    int u=centroid(x);
    ranks[u]=rank;
    if('A'+ranks[u]>'Z'){
        can=0;
    }

    dead[u]=1;//die shala
    for(auto &v:G[u])
    {
        if(!dead[v]) f(v,rank+1);
    }
}
int main()
{
    fast_cin
    int n;
    cin >> n;
    for(int i=1;i<n;i++){
        int u,v;
        cin >> u >> v;
        G[u].pb(v);
        G[v].pb(u);
        //in[v]++;
        //out[v]++;
    }
    f(1,0);
    if(can){
        for(int i=1;i<=n;i++) cout << (char)('A'+ranks[i])<< " ";
        cout <<endl;
    }
    else cout <<"Impossible\n";
}
