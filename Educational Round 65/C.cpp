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

const int maxn=5e5+5;
int arr[maxn];
int par[maxn];
int urank[maxn];

void make_set(int &x)
{
    par[x]=x;
    urank[x]=1;
}
int find(int &x)
{
    if(par[x]==x)
        return x;
    else return find(par[x]);
}
void unite(int &a, int &b)
{
    int pa=find(a);
    int pb=find(b);
    if(pa==pb) return;
    if(urank[pa]>=urank[pb])
    {
        par[pb]=pa;
        urank[pa]+=urank[pb];
    }
    else{
        par[pa]=pb;
        urank[pb]+=urank[pa];
    }
}

int main()
{
    fast_cin
    int n,m;
    cin >> n >> m;  //testing
    for(int i=1;i<=n;i++) make_set(i);
    for(int i=0;i<m;i++)
    {
        int k;
        cin >> k;
        vi v_;
        for(int u=0;u<k;u++)
        {
            int x;
            cin >> x;
            v_.pb(x);
        }
        for(int a=0;a+1<v_.size();a++)
        {
            unite(v_[a],v_[a+1]);
        }
    }
    for(int i=1;i<=n;i++) cout << urank[find(i)]<<" ";
    cout << endl;
}
