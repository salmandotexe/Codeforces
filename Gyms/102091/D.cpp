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
    // freopen("in.txt","r",stdin);
    // freopen("out.txt","w",stdout);
    int T;
    scanf("%d", &T);
    for(int tc=1;tc<=T;tc++)
    {
        int N;
        scanf("%d", &N);
        vi v(N);
        for(int i=0;i<N;i++) scanf("%d", &v[i]);
        auto get=[&](int n)
        {
            int pos=v[0];
            int cnt=0;
            for(int i =0; i <n; i++)
            {
                //cout << "\t"<<i << endl;
                int newpos=upper_bound(all(v),pos+20)-v.begin();
                cnt++;
                if(newpos==n) break;
                pos=v[newpos];
            }
            return cnt;
        };

        int ans = get(N);
        printf("%d\n", ans);
    }
}
