#include <bits/stdc++.h>

using namespace std;

int parent[100006],rankk[100006];

void Make_Set(int x){
    parent[x]=x;
    rankk[x]=0;
}

int Find(int x){
    if(x!=parent[x]) parent[x]=Find(parent[x]);
    return parent[x];
}

int Union(int &x, int &y){
    int PX=Find(x),PY=Find(y);
    if(rankk[PX]>rankk[PY])
        parent[PY]=PX;
    else{
        parent[PX]=PY;
        if(rankk[PX]==rankk[PY])
            rankk[PY]++;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T,n,x,y,ans,m,q;
    char c;
    string s;

    cin >> T;

    for(int tc=1;tc<=T;tc++)
    {
        memset(rankk,0,sizeof(rankk));
        cin >> n >> m >> q;
        for(int i=1;i<=n;i++) Make_Set(i);
        while(m--)
        {
            int u,v;
            cin >> u >> v;
            Union(u,v);
        }
        while(q--)
        {
            int u,v;
            cin >> u >> v;
            cout << (Find(u)==Find(v))?1:0;
        }
        cout<<endl;
    }

    return 0;
}
