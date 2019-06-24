#include <bits/stdc++.h>

using namespace std;

char v[1005][1005];
char ans[1005][1005];

int n;

void R()
{
    for(int j=1;j<=n;j++)
    {
        for(int i=n;i>=1;i--)
        {
            ans[j][n-i+1]=v[i][j];
        }
    }

    for(int i=1;i<=n;i++)
    {
        for(int j=1; j<=n; j++)
        {
            	 if(ans[i][j]=='>') ans[i][j]='v';
            else if(ans[i][j]=='^') ans[i][j]='>';
            else if(ans[i][j]=='<') ans[i][j]='^';
            else if(ans[i][j]=='v') ans[i][j]='<';
        }
    }
    for(int i=1;i<=n; i++) for(int j=1;j<=n;j++) v[i][j]=ans[i][j];
}

void L()
{
    for(int j=n;j>=1;j--)
    {
        for(int i=1;i<=n;i++)
        {
            ans[n-j+1][i]=v[i][j];
        }
    }

    for(int i=1;i<=n;i++)
    {
        for(int j=1; j<=n; j++)
        {
            	 if(ans[i][j]=='^') ans[i][j]='<';
            else if(ans[i][j]=='>') ans[i][j]='^';
            else if(ans[i][j]=='<') ans[i][j]='v';
            else if(ans[i][j]=='v') ans[i][j]='>';
        }
    }
    for(int i=1;i<=n; i++) for(int j=1;j<=n;j++) v[i][j]=ans[i][j];
}

void pr()
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1; j<=n; j++)
        {
            cout << ans[i][j];
        }
        cout <<endl;
    }
}
/*
3 R
>v>
...
<^<
*/
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    string s;
    cin >> n >> s;
    for(int i=1;i<=n;i++) for(int j=1;j<=n;j++) 
    {
        cin >> v[i][j];
        ans[i][j]=v[i][j];
    }
    int res=0;
    for(auto a:s)
    {
    	if(a=='R') res++;
    	else if(a=='L') res+=(3);
    }
    res%=4;
    while(res>0)
    {
    	R();
    	res--;
    }
    pr();
}
