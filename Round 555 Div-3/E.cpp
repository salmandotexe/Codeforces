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

int main()
{
    fast_cin
    int n;
    cin >> n;
    vll a(n);
    for(int i=0;i<n;i++) cin >> a[i];

    multiset<int> ms;
    int u;

    vi res;
    for(int i=0;i<n;i++) {
        cin >> u;
        ms.insert(u);
    }
    for(int i=0;i<n;i++)
    {
        auto it_=ms.lower_bound(n-a[i]);   //.find() use korar jonno contest time e mara :)
        if(it_==ms.end()) it_=ms.begin();

        res.pb((a[i] + *it_) % n);
        ms.erase(it_);
    }
    for(auto &a : res)
    {
        cout << (a) << " ";
    }
    cout << endl;

}
