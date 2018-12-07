
//months later, still WA on Test 8

#include <bits/stdc++.h>
#define MAXX 1000005
#define ll long long
#define pb push_back
#define vi vector<int>
#define pii pair<int,int>
#define mp make_pair
using namespace std;

int m;
vi V[(int)(1e5+10)];
int cats[(int)(1e5+10)];

int res=0;

int dfs(int src,int curr)
{
    if(curr>m)
        return 0;
    if(V[src].size()==0)
        res++;
    for(auto a:V[src])
    {
        if(curr+cats[a]>m)
            continue;
        if(cats[a])
            dfs(a,curr+1);
        else
            dfs(a,0);
    }
}
int main()
{
    int n,u,v;
    cin >> n >> m;
    for(int i=1;i<=n;i++)
        cin >> cats[i];
    V[0].pb(1);
    for(int i=0;i<n-1;i++)
    {
        cin >> u >> v;
        V[u].pb(v);
    }
    dfs(0,0);
    cout << res<<endl;
}
