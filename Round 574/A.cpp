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
 
 
int main()
{
    fast_cin
    //freopen("in.txt","r",stdin);
    int n,k;
    cin >> n >> k;
    vi v(n),freq(1005);
    for(int i=0;i<n;i++) cin >> v[i],freq[v[i]]++;
    priority_queue < ll, std::vector<ll>, std::less<ll> > mxheap;	// mxheap.push(), mxheap.top(), mxheap.pop()
    for(int i=1;i<=1000;i++)
    {
        if(freq[i]){
            mxheap.push(freq[i]);
        }
    }
    int ans=0;
    for(int x=0;x< n - n/2; x++)
    {
        if(mxheap.empty()) break;
 
        int u=mxheap.top();
        mxheap.pop();
 
 
        //cout <<"choose "<< u << " ";
        if(u<=2){
            ans+=u;
        }
        else{
            ans+=2;
            mxheap.push(u-2);
        }
 
    }
    cout << ans << endl;
 
}
