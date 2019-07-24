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
    //freopen("in.txt","r",stdin);
    int T;
    cin >> T;
    for(int tc=1;tc<=T;tc++)
    {
        vll a(3);
        cin >> a[0] >> a[1] >> a[2];
        sort(all(a));
        ll bob=a[0];
        ll alice=a[1];
        //cout <<"initially "<< bob<<" , "<< alice << endl;
        ll delta=a[1]-a[0];
 
        bob+=delta;
        a[2]-=delta;
        //cout <<"finally "<< bob<<" , "<< alice << endl;
        if(a[2]>0)
        {
            alice += a[2]/2;
            bob += a[2]- a[2]/2;
        }
        cout << min(alice, bob) << endl;
 
    }
}
