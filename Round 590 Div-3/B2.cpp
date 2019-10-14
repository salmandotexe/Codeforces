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
    fast_cin
    int n,k;
    cin >> n >> k;
    vi v(n);
    set<int> s;
    for(int i=0;i<n;i++) cin >> v[i];
    queue<int> q;
    int cur=0;
    for(int i=0;i<n;i++){
        if(s.find(v[i])==s.end()){
            q.push(v[i]);
            s.insert(v[i]);
        }
        else{
            continue;
        }
        cur++;
        if(cur>k){
            cur--;
            int u=q.front();
            q.pop();
            auto it=s.find(u);
            if(it!=s.end()){
                s.erase(it);
            }
        }
    }
    cout << q.size()<< "\n";
    stack<int> st;
 
    while(!q.empty()){
        st.push(q.front());
        q.pop();
    }
    while(!st.empty()){
        cout << st.top()<<" ";st.pop();
    }
    cout <<"\n";
 
}
