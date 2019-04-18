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

ostream& operator << (ostream &out, vector<int> &v) { for(auto a:v) out << a<<" "; out<<endl; }


int main()
{
  fast_cin
  string s;
  getline(cin,s);


  if(s[s.size()-1]=='?'){
    cout << 7 <<endl;
  }
  else
  {
    for(int i=0;i<s.size();i++){
      if(s[i]==' ' || isalpha(s[i])) continue; else  s[i]=' ';
    }
    //cout << s <<endl;
    string t;
    stringstream ss(s);
    while(ss >> t)
    {
      if(t=="Sussu"){
        cout <<"AI SUSSU!\n";
        return 0;
      }
    }

    cout << "O cara é bom!\n";
  }

}
