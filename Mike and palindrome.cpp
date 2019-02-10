#include <bits/stdc++.h>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstring>
#include <chrono>
#include <complex>
#define endl "\n"
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
#define f first
#define s second

using namespace std;

int main()
{
    string s;
    cin >> s;
    int n=s.size();
    bool f=0;
    for(int i=0;i<n/2;i++)
    {
        if(s[i]!=s[n-i-1])
        {
            if(f==0)
                f=1;
            else
            {
                cout << "NO\n";
                return 0;
            }
        }
    }
    if(f==0)
    {
        if(n&1)
            cout << "YES\n";
        else
            cout<<"NO\n";
        return 0;
    }
    if(f)
    {
        cout << "YES\n";
        return 0;
    }
}
