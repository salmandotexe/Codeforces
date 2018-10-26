#include <bits/stdc++.h>

using namespace std;

int arr[102][102];
int n;


int main()
{
    int n;
    char c;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cin >> c;
            arr[i][j]=(c=='o');
        }
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            int res=0;
            res+=arr[i-1][j];
            res+=arr[i][j-1];
            res+=arr[i+1][j];
            res+=arr[i][j+1];
            if(res&1)
            {
                cout << "NO\n";
                return 0;
            }
        }
    }
    cout << "YES\n";
}
