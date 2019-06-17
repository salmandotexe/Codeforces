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
    srand (time(NULL));
    fast_cin
    int n,k;
    cin >> n >> k;
    vll v(n);
    for(int i=0;i<n;i++) cin >> v[i];
    map<ll,int> m;
    sort(all(v));

    for(int i=0;i<n;i++)
    {
        m[v[i]]++;
    }

    if(k<=n)
    {
        for(int i=0;i<k;i++)
          cout << 1 <<" "<< v[i] << endl;
        exit(0);
    }
    for(int i=0;i<n;i++) cout << 1 <<" "<< v[i] << endl;
    int reqd=k-n;

    while(1)
    {
        if(reqd<=0) break;
        ll sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=v[i];
            if(m.count(sum)==0)
            {
              cout << i+1 <<" ";for(int x=0;x<=i;x++) cout << v[x]<<" ";
              cout << endl;
              m[sum]++;
              reqd--;
              break;
            }
            if(i==n-1 && m.count(sum)){
                random_shuffle(all(v));
            }
        }
    }
}
