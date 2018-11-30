#include <bits/stdc++.h>

using namespace std;
int state=0;

int main()
{
    int n,m;
    cin >> n >> m;
    vector<vector<char>> V(n+1,vector<char>(m+1,'.'));

    for(int i=1;i<=n;i++)
    {
        if(!(i&1))
        {
            if(state==0)
            {
                V[i][m]='#';
                state=1;
            }
            else
            {
                V[i][1]='#';
                state=0;
            }
            continue;
        }
        for(int j=1;j<=m;j++)
            V[i][j]='#';
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cout << V[i][j];
        }
        cout <<endl;
    }
}
