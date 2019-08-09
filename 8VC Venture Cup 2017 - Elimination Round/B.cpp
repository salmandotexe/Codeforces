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
    //freopen("in.txt","r",stdin);
    fast_cin
    int n,m;
    cin >> n >> m;
    vector<string> a(n),b(m);
 
    set<string> strA;
    set<string> strB;
 
    set<string> common;
 
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
        strA.insert(a[i]);
    }
 
    for(int i=0;i<m;i++)
    {
        cin >> b[i];
        auto u=strA.find(b[i]);
 
        if(u != strA.end()) //check strA for b[i]. if present remove from strA.
        {
            common.insert(b[i]);
            strA.erase(u);
        }
        else strB.insert(b[i]);
    }
 
    for(int turn=0;;turn=!turn)
    {
        if(!common.empty()){
            common.erase(common.begin());
            continue;
        }
        else{
            if(!turn)
            {
                if(strA.empty())
                {
                    cout <<"NO\n";
                    exit(0);
                }
                else{
                    strA.erase(strA.begin());
                }
            }
            else{
                if(strB.empty())
                {
                    cout <<"YES\n";
                    exit(0);
                }
                else{
                    strB.erase(strB.begin());
                }
            }
        }
    }
 
}
