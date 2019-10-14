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
#define OUT(x) for(auto a:x) cout << a << " "; cout << endl;
#define OK cout << "@===================ok===================@" <<endl;
#define WTF cout <<"< "<<lo<<" | "<< hi <<" >" << endl;
 
using namespace std;
struct Fenwick
{
	vector<ll> t;
    void reset(int n)
    {
		t.assign(n+1, 0);
	}
    void update(int p, ll v)
    {
        for (; p < (int)t.size(); p += (p&(-p))) t[p] += v;
    }
    ll query(int r) //finds [1, r] sum
    {
        ll sum = 0;
        for (; r; r -= (r&(-r))) sum += t[r];
        return sum;
    }
    ll query(int l, int r) //finds [l, r] sum
    {
		if(l == 0) return query(r);
		return query(r) - query(l-1);
	}
};
 
 
int main()
{
    fast_cin
    string s;
    cin >> s;
    int q,n;
    cin >> q;
    n=s.size();
    Fenwick f[30];
    for(int i=0;i<30;i++) f[i].reset(n+10);
    for(int i=0;i<n;i++){
        f[s[i]-'a'].update(i+1,1);
    }
    for(;q-->0;){
        int t;
        cin >> t;
        if(t==1){
            int pos;
            char ch;
            cin >> pos >> ch;
            f[s[pos-1]-'a'].update(pos,-1);
            s[pos-1]=ch;
            f[s[pos-1]-'a'].update(pos,1);
        }
        else{
            int l,r;
            cin >> l >> r;
            int ans=0;
            for(int i=0;i<26;i++){
                if(f[i].query(l,r)) ans++;
            }
            cout << ans <<"\n";
        }
    }
}
