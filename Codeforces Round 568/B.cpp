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
    //freopen("out.txt","w",stdout);

    int T;
    cin >> T;
    for(int tc=1;tc<=T;tc++)
    {
        string s,t;
        cin  >> s >> t;
        if(s.size()>t.size())
        {
            cout <<"NO\n";
            continue;
        }
        char last=';';

        int distA=0,distB=0;

        for(auto a:s)
        {
            if(a!=last)
                distA++;
            //st.push(a);
            last=a;
        }

        last=';';

        for(auto a:t)
        {
            if(a!=last)
                distB++;
            last=a;
        }
        if(distA!=distB)
        {
            cout <<"NO\n";
            continue;
        }

        bool cntinue=0;
        int i,j;
        for( i=0,j=0;i<s.size() && j<t.size();)
        {
            if(s[i]!=t[j])
            {
                cntinue=1;
                break;
            }
            if(s[i]==t[j])
            {
                int x;
                int cnt=0;
                for(x=i;s[x]==s[i];x++) cnt++;
                i=x;
                for(x=j;t[x]==t[j];x++) cnt--;
                j=x;
                if(cnt>0)
                {
                    cntinue=1;
                    //no=1;
                    break;
                }
            }
            if(cntinue) break;
        }
        if(!cntinue && j==t.size())
        {
            cout <<"YES\n";
            continue;
        }
        cout <<"NO\n";

    }
}
