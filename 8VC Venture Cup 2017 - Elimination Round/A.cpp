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
 
const int MAXN=2000;
bool prime[MAXN+10];
int main()
{
    int n;
    cin >> n;
    if(n+2<=1000){
        cout << n+2 << endl;
    }
    else{
        memset(prime,true,sizeof(prime));
        prime[0]=prime[1]=false;
        for(int i=2; i*i <= 2000 ; i++) for(int j = i*i; j < 2000 ; j += i)
            prime[j] =false;
 
        for(int m=1;m<=1000;m++)
        {
            int num=n*m+1;
            if(!prime[num]){
                cout << m << endl;
                exit(0);
            }
        }
    }
}
