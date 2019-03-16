#include <bits/stdc++.h>
#define ll long long int
#define vi vector<int>
#define vll vector<ll>
#define vvi vector < vi >
#define pii pair<int,int>
#define pll pair<long long, long long>
#define mod 1000000007
#define inf 1000000000000000001;
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
//Generate Random numbers in [A,B]:
//insert after using namespace std:
std::mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

#define ran(a,b) rng() % ((b) - (a) + 1) + (a)
ostream& operator << (ostream &out, vector<int> &v) { for(auto a:v) out << a<<" "; out<<endl; }

int main()
{
  for(int tc=1;tc<=1;tc++)
  {
    int n;
    cin >> n;
    string s;
    cin >> s;

    string original=s;
    ll ans;
    string ans1,ans2,ans3;
    for(int trials=0;trials<500;trials++)
    {
      ans=0;
      s=original;
      n=s.size();
       ans1="";
       ans2="";
       ans3="";

      for(int i=0;i<n;)
      {
        int jj=ran(1,2);
        int j;
        int res=0;
        for(j=i;j<min(n,i+jj);j++)
        {
          ans1+=s[j];
          res*=10;
          res+=s[j]-'0';
        }
        //cout <<res<<endl;
        ans+=res;
        //ans1+=to_string(res);
        ans1+='+';
        i=j;
      }
      //finish S1
      s=to_string(ans);
      n=s.size();
      ans=0;
      for(int i=0;i<n;)
      {
        int jj=ran(1,2);
        int j;
        int res=0;
        for(j=i;j<min(n,i+jj);j++)
        {
          ans2+=s[j];
          res*=10;
          res+=s[j]-'0';
        }
        //cout <<res<<endl;
        //ans2+=to_string(res);
        ans2+='+';
        ans+=res;
        i=j;
      }

      //S2
      s=to_string(ans);
      n=s.size();
      ans=0;

      for(int i=0;i<n;)
      {
        int jj=ran(1,2);
        int j;
        int res=0;
        for(j=i;j<min(n,i+jj);j++)
        {
          ans3+=s[j];
          res*=10;
          res+=s[j]-'0';
        }
        //cout <<res<<endl;

        ans+=res;
        //ans3+=to_string(res);
        ans3+='+';
        i=j;
      }
      //S3.

      s=to_string(ans);
      n=s.size();
      if(s.size()==1)
      {
        ans1.erase(--ans1.end());
        ans2.erase(--ans2.end());
        ans3.erase(--ans3.end());
        cout << ans1 <<endl<<ans2<<endl<<ans3<<endl;
        break;
      }
    }

    //cout <<ans<<endl; AC ;D

  }
}
