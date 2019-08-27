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
    string s;
    cin >>s;
    string res="";
    int n=s.size();
    bool f = 0;
    for(int i=0;i<n;i++){
        int m=res.size();
        f=0;
        if(m>1 && s[i]==res[m-1] && res[m-1]==res[m-2])//triplet
            f=1;
        if(m>2 && s[i]==res[m-1] && res[m-2]==res[m-3])
            f=1;
        if(f==0) res+=s[i];
    }
    cout << res << endl;
 
}
