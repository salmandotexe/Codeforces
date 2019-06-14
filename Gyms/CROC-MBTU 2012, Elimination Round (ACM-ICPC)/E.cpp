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
    string s;
    cin >> s;
    int p=0,q=0;
    stack<int> plus;
    stack<int> minus;
    int ans=0;
    int mx=0,mn=0;
    for(auto a:s)
    {
        if(a=='+') ans++;
        if(a=='-') ans--;
        mx=max(ans,mx);
        mn=min(ans,mn);
    }
    cout << abs(mx-mn) << endl;
}
