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

const int maxsize=1e5+10;

vll pow1(maxsize);          //for the love of god dont forget to call genpow();
vll pow2(maxsize);

const int mod1=1e9+7;
const int mod2=1e9+9;

const int base=37;
const int base2=137;

class Hashing{
    vll pref1;
    vll pref2;
public:
    Hashing(string &s)  //this is ok.
    {
        int n=s.size();
        pref1.resize(n+1);
        pref2.resize(n+1);
        for(int i=0;i<n;i++)
        {
            pref1[i+1] = (pref1[i] + 1LL *  (s[i]-'a'+1) * pow1[i] ) %mod1;
            pref2[i+1] = (pref2[i] + 1LL *  (s[i]-'a'+1) * pow2[i] ) %mod2;
        }
    }

    inline pll operator()(const int pos, const int len) //note to self: this is ok. i verified it and wrote each line.
    {
        ll hash1 = pref1[pos+len] - pref1[pos];
        ll hash2 = pref2[pos+len] - pref2[pos];

        while(hash1<0) hash1+=mod1;
        while(hash2<0) hash2+=mod2;

        hash1 = 1LL * hash1 * pow1[maxsize -1- (pos+len-1)] % mod1;
        hash2 = 1LL * hash2 * pow2[maxsize -1- (pos+len-1)] % mod2;
        return mp(hash1,hash2);
    }

};

void genpow()   //this is ok.
{
    pow1[0]=pow2[0]=1;
    for(int i=1;i<maxsize;i++){
        pow1[i]=pow1[i-1]*base % mod1;
        pow2[i]=pow2[i-1]*base2 % mod2;
    }
}

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
