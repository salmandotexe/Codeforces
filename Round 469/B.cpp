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

int main()
{
    fast_cin
    int n,m;
    cin >> n >> m;
    vi v(n);
    for(int i=0;i<n;i++) cin >> v[i];
    vi v2(m);
    for(int i=0;i<m;i++) cin >> v2[i];
    int res1=accumulate(all(v),0);
    int res2=accumulate(all(v2),0);
    int i=0,j=0;
    int cnt=0;
    while(1)
    {
        if(res1<=0 || res2<=0) break;
        if(i>=n || j>=m) break;
        if(res1==res2){
            cnt++;
        }
        if(res1>=res2){
            res1-=v[i++];
        }
        else{
            res2-=v2[j++];
        }
    }
    cout << cnt << endl;

}
