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

bool isquasi(int a)
{
    while(a)
    {
        int rem=a%10;
        if(rem!=0 && rem!=1)
        {
            return 0;
        }
        a/=10;
    }
    return 1;
}

int n, len=0;
int ans=0;
int arr[15];


int main()
{
	fast_cin

	cin>>n;
	while(n>0)
	{
		arr[++len]=n%10;
		n/=10;
	}
	reverse(arr+1, arr+len+1);

	for(int i=1;i<=len;i++)
		ans=max(ans, arr[i]);
    cout<<ans<<endl;


	for(int i=1;i<=ans;i++)
	{

		int cur=0;
		for(int j=1;j<=len;j++)
		{
			if(arr[j]>=i)
				cur=cur*10 + 1;
			else
				cur*=10;
		}

		cout<<cur<<" ";
	}
    //cnt++;
    cout << endl;
    exit(0);
}
