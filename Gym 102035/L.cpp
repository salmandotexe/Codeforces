#include <bits/stdc++.h>
#define mod 1000000007
using namespace std;


int dp[1005];
int main()
{
    int n;
    cin >> n;
    dp[0]=1;
    for(int i=1;i<1006;i++)
        dp[i]=(dp[i-1]*2) %mod;
    for(int i=0;i<n;i++) cout << dp[i]<< " ";
    cout<<endl;
}
