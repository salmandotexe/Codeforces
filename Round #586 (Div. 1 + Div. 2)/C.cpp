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
#define OK cout << "ok" <<endl;
 
using namespace std;
 
const int maxn=5e5+5;
int pos[maxn];
int main()
{
	fast_cin
    string s;
	cin >> s;
	int n=s.size();
	char mn;
	int mnid=-1;
	for(int i=0;i<n;i++)
	{
		if(i==0){
			pos[i]=-1;
			mn=s[i];
			mnid=i;
			continue;
		}
		if(s[i]<mn){		//new minimum found
			// pos[i]=mnid;	//prev min id
			// mnid=i;			//new min id
			// mn=s[i];		//update minimum
			pos[i]=-1;
			mnid=i;
			mn=s[i];
		}
		else if(s[i]==mn){	//cannot pick any from left.
			pos[i]=-1;
		}
		else if(s[i]>mn){	//can pick mnid.
			pos[i]=mnid;
		}
	}
	for(int i=0;i<n;i++){
		if(pos[i]==-1){
			cout <<"Mike\n";//!player
		}
		else {
			int c=0;
			for(int j=i;j!=-1;j=pos[j],c=!c){
				if(j==-1) break;
			}
			if(c){
				cout <<"Mike\n";
			}
			else cout <<"Ann\n";
		}
	}
}
