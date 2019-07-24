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
    //freopen("in.txt","r",stdin);
    fast_cin;
    int T;
    cin >> T;
    for(int tc=1;tc<=T;tc++)
    {
        int n,k;
        cin >> n >> k;
        vi v(n),dp(n+1);
        int nodd=0;
        for(int i=0;i<n;i++) {
            cin >> v[i];
            if(v[i]%2==1){
                nodd++;
            }
            dp[i+1]=nodd;
        }
        if(k>nodd){
            cout <<"NO\n";
            continue;
        }
        else{
 
            if(nodd%2)
            {
                if(k%2==0){
                    cout <<"NO\n";
                    continue;
                }
                else{
                    cout <<"YES\n";//k is odd
                    if(k==1) {
                        cout << n << endl;
                        continue;
                    }
 
                    else{
                        int cur=0;
                        for(int i=0;i<n;i++){
                            if(v[i]%2){
                                cout << i+1 <<" ";
                                cur++;
                                if(cur+1==k){
                                    cout << n << endl; break;
                                }
                            }
                        }
                    }
 
                }
            }
            else{
                if(k%2==1){
                    cout <<"NO\n";
                    continue;
                }
                else{
                    cout <<"YES\n";//k is even
                    int cur=0;
                    for(int i=0;i<n;i++){
                        if(v[i]%2){
                            cout << i+1 <<" ";
                            cur++;
                            if(cur+1==k){
                                cout << n << endl; break;
                            }
                        }
                    }
                }
            }
        }
    }
}
