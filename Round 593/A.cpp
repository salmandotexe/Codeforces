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
    int T;
    cin >> T;
    for(int tc=1;tc<=T;tc++)
    {
        ll a,b,c;
        cin >> a >> b >> c;

        ll A=a,B=b,C=c;

        ll res1=0,res2=0;
        while(a>=1 && b>=2){
            a-=1;
            b-=2;
            res1+=3;
        }
        while(b>=1 && c>=2){
            b-=1;
            c-=2;
            res1+=3;
        }

        while(B>=1 && C>=2){
            B-=1;
            C-=2;
            res2+=3;
        }
        while(A>=1 && B>=2){
            A-=1;
            B-=2;
            res2+=3;
        }
        cout << max(res1,res2)<<endl;

    }
}
