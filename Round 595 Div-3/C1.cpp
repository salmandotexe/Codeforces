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
#define EPS 1e-18
using namespace std;

const int maxn=21;
int main()
{
    fast_cin
    int T;
    cin >> T;
    for(int tc=1;tc<=T;tc++)
    {
        ll n;
        cin >> n;
        vll arr(25);
        ll NN=n;
         string a="";
         while(n){
             a+=('0'+n%3);
             n/=3;
         }
         reverse(all(a));
         //cout << a << endl;
         for(int i=0;i<a.size();i++){
             arr[i]=a[a.size()-1-i]-'0';
         }
         //cout << endl << a << endl;
         bool f=0;
         int idx=-1;
         for(int i=maxn;i>=0;i--){
             if(arr[i]==2 && !f){
                 f=1;
                 idx=i;
             }
         }

         if(f){                     //2 present
             //2 is found on idx.
             //cout <<"2 is found;\n";
             int k=idx+1;
             while(k<maxn){
                 if(arr[k]==0){
                     for(int i=k;i>=0;i--){
                         arr[i]=0;
                     }
                     arr[k]=1;
                     break;
                 }
                 k++;
             }
             ll VAL=0;
             for(int i=maxn;i>=0;i--){
                 if(arr[i]) VAL+=pow(3LL,i);
             }
             cout << VAL << endl;
         }
         else{
             cout << NN << endl;
         }
    }
}
