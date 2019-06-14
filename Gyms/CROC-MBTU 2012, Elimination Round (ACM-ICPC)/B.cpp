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
    string s;
    cin >> s;
    if(s[0]=='h')
    {
        s.replace(s.find("http"),4,"http://");
        // int u=s.find("ru");
        // if(s[u-1]=='/')
        //     int u=s.find(s[u+1],s.size(),"ru");
        // if(u+2==s.size())
        //     s.replace(u,2,".ru");
        // else
        //     s.replace(u,2,".ru/");
    }
    else if(s[0]=='f')
    {
        s.replace(s.find("ftp"),3,"ftp://");
        // if(s[u-1]=='/')
        //     int u=s.find(s[u+1],s.size(),"ru");
        // if(u+2==s.size())
        //     s.replace(u,2,".ru");
        // else
        //     s.replace(u,2,".ru/");
    }
    for(int i=s.find("://");i<s.size()-1;i++)
    {
        if(s[i]=='r'&&s[i+1]=='u' && s[i-1]!='/')
        {
            s.replace(i,2,".ru/");
            break;
        }
    }
    if(s[s.size()-1]=='/')
      s.pop_back();
    cout << s<<endl;
}
