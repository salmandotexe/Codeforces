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
    int n;
    cin >> n;
    vi v(n);
    for(int i=0;i<n;i++) cin >> v[i];
    priority_queue < ll, std::vector<ll>, std::less<ll> > mxheap;	// mxheap.push(), mxheap.top(), mxheap.pop()

    int l=0,r=n-1;
    int el=-1;
    int cnt=0;
    string res="";
    while(cnt<n)
    {
        if(l>r) break;
        if(cnt==0)
        {
            el=min(v[l],v[r]);
            cnt++;
            if(el==v[l]) {
                l++;
                res+='L';
            }
            else {
                r--;
                res+='R';
            }
            continue;
        }
        int mn=min(v[l],v[r]);
        int mx=max(v[l],v[r]);
        if(mn>el)
        {
            el=mn;
            cnt++;
            if(el==v[l]) {
                l++;
                res+='L';
            }
            else {
                r--;
                res+='R';
            }
            continue;
        }
        if(mx > el)
        {
            el=mx;
            cnt++;
            if(el==v[l]) {
                l++;
                res+='L';
            }
            else {
                r--;
                res+='R';
            }
            continue;
        }
        if(mn<=el && mx <= el)
            break;
    }
    cout << cnt << endl << res << endl;
}
