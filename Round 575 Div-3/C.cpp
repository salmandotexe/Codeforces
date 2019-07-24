#include <bits/stdc++.h>
#define ll long long int
#define vi vector<int>
#define vll vector<ll>
#define vvi vector < vi >
#define pii pair<int,int>
#define pll pair<long long, long long>
#define mod 1000000007
const int inf=100000;
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
const int maxn=100005;
int x[maxn];
int y[maxn];
vi f[maxn];
int n;
 
 
int main()
{
    for(int i=0;i<maxn;i++) f[i]=vi(5);
    //freopen("in.txt","r",stdin);
    fast_cin
    int T;
    cin >> T;
    for(int tc=1;tc<=T;tc++)
    {
        bool yrM=0,xrM=0,xrm=0,yrm=0;
        int xmin=-inf;
        int ymin=-inf;
        int xmax=inf;
        int ymax=inf;
        cin >> n;
        for(int i=1;i<=n;i++)
        {
            cin >> x[i] >> y[i] >> f[i][1] >> f[i][2] >> f[i][3] >> f[i][4];
            //x restriction:
            if(f[i][3]==0)
            {
                xmax=min(xmax,x[i]),xrM=1;
                //xmin=min(xmin,x[i]);
            }
            if(f[i][1]==0)
            {
                xmin=max(xmin,x[i]),xrm=1;
                //xmax=max(xmax,x[i]);
            }
            if(f[i][2]==0)
            {
                ymax=min(ymax,y[i]),yrM=1;
                //ymin=min(ymin,y[i]);
            }
            if(f[i][4]==0)
            {
                ymin=max(ymin,y[i]),yrm=1;
                //ymax=max(ymax,y[i]);
            }
        }
        if(xmin>xmax)
        {
            cout << 0 << endl;
            continue;
        }
        if(ymin>ymax)
        {
            cout << 0 << endl;
            continue;
        }
        cout << 1 <<" "<< xmin << " "<< ymin << endl;
 
 
    }
 
 
}
