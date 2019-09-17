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
 
struct matrix{
	ll a[4][4]={0};//={{0,0},{0,0}};			older versions of c++ does not support this :|
};
 
inline matrix operator*(matrix A, matrix B)
{
	matrix R;
	R.a[0][0]=R.a[0][1]=R.a[1][0]=R.a[1][1]=0;
	for(int i=0;i<4;i++)
	for(int j=0;j<4;j++)
	for(int k=0;k<4;k++)
	{
		R.a[i][j] += A.a[i][k]*B.a[k][j];
		R.a[i][j]%=mod;
	}
	return R;
}
 
inline matrix operator^(matrix A, ll b)
{
	matrix R;
	for(int i=0;i<4;i++)
	for(int j=0;j<4;j++)
	{
		if(i==j) R.a[i][j]=1;
		else R.a[i][j]=0;
	}
 
 
	while(b)
	{
		if(b&1) R=R*A;
		b>>=1;
		A=A*A;
	}
	return R;
}
 
int main()
{
    matrix m;
	for(int i=0;i<4;i++) for(int j=0;j<4;j++) {
		if(i!=j) m.a[i][j]=1;
		else m.a[i][j]=0;
	}
 
	int n;
	cin >> n;
	matrix x=m^n;
	cout << x.a[3][3]<<endl;
}
