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
#define precise fixed(cout);cout<<setprecision(10);
using namespace std;


int main()
{
    precise;
    ll n,h;
    cin >> n >> h;
    for(int i=1;i<=n-1;i++)
    {
        double x=(h*h*i) /double(n);
        x= sqrt(x);
        if(i==n) break;
        cout << x <<" ";
    }
    cout << endl;
}
