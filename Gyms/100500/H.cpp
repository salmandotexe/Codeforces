#include <stdio.h>
#include <vector>

using namespace std;

const int maxn=1005;
const int inf=1e9-1;
int arr[maxn][maxn];
int n,m;

vector<vector<int> > dp(maxn+2,vector<int>(maxn+2,inf));
int solve(int i, int j)
{
    if(i>n || i<1) return -inf;
    if(j>m || j<1) return -inf;

    if(dp[i][j]!=inf) return dp[i][j];
    if(i==n && j==m) return arr[i][j];
    else return dp[i][j]=arr[i][j]+max(solve(i,j+1),solve(i+1,j));
}
int main()
{
    //freopen("in.txt","r",stdin);
    int T;
    scanf("%d",&T);
    for(int tc=1;tc<=T;tc++)
    {
        scanf("%d%d",&n,&m);
        for(int i=1;i<=n;i++) for(int j=1;j<=m;j++) scanf("%d",&arr[i][j]);

        dp=vector<vector<int> >(maxn+2,vector<int>(maxn+2,inf));
        int ans=solve(1,1);
        printf("Case %d: %d\n",tc,ans);
    }
}
