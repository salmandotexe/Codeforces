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
 
int main()
{
    int T;
    fast_cin
    cin >> T;
    for(int tc=1;tc<=T;tc++)
    {
        string s,t;
        int n;
        cin >> n;
        cin >> s >> t;
        int dis=0;
        vi v;
        for(int i=0;i<n;i++){
            if(s[i]!=t[i]) v.pb(i);
        }
        if(v.size()>2 || v.size()==1){
            cout <<"No\n";
        }
        else{
            string S=s,T=t;
            swap(S[v[0]],T[v[1]]);
            if(S==T) {
                cout <<"Yes\n";
                continue;
            }
            swap(S[v[0]],T[v[1]]);
            swap(T[v[0]],S[v[1]]);
            if(S==T) {
                cout <<"Yes\n";
                continue;
            }
            cout <<"No\n";
        }
    }
}
