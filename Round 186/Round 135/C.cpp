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
    int n,k;
    string s;
    cin >> n >> k;
    cin >> s;
 
    if(n==1){
        cout << 0 <<endl << s<<endl;
        exit(0);
    }
    if(k==2){
        int mis1=0;
        int mis2=0;
        string res1="";
        string res2="";
        for(int i=0;i<n;i++){
            res1+="AB"[i%2];
            res2+="BA"[i%2];
            if(s[i]!=res1[i%2]) mis1++;
            if(s[i]!=res2[i%2]) mis2++;
        }
        cout << min(mis1,mis2)<<endl;
        if(mis1<mis2)
            cout << res1 <<endl;
        else cout << res2 << endl;
        exit(0);
    }
    int nas=0;
    bool f=0;
    for(int i=0;i+1<n;i++){
        if(s[i]==s[i+1] && !f){
            nas++;
            s[i+1]='?';
            f=1;
        }
        if(s[i]==s[i+1] && f){
            nas++;
            s[i+1]='-';
            f=0;
        }
    }
    cout << nas << endl;
    for(int i=0;i<n;i++)//AAAA -> A?B-A?
    {
        if(s[i]=='-' || s[i]=='?')
        {
            if(i==n-1) s[i]=(s[i-1]=='A'?'B':'A');
            else{
                for(char u='A';u<'A'+k;u++){
                    if(u!=s[i-1] && u!=s[i+1]){
                        s[i]=u;
                    }
                }
            }
        }
    }
 
    cout << s << endl;
    exit(0);
 
}
