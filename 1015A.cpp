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

const int maxn=105;
int a[maxn];

int main()
{
    fast_cin
    int l,r;
    int n,m;
    cin >> n >> m;
    while(n--)
    {
        cin >> l >> r;
        a[l]++;
        a[r+1]--;
    }
    int cum=0;
    for(int i=0;i<maxn;i++)
    {
        cum+=a[i];
        a[i]=cum;
    }
    int cnt=0;
    for(int i=1;i<=m;i++)
    {
        if(a[i]==0)
        cnt++;
    }
    cout << cnt << endl;
    for(int i=1;i<=m;i++)
    {
        if(a[i]==0)
            cout << i << " ";
    }
    cout << endl;
}
