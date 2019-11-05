
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<ll> v(n);
    for(int i=0;i<n;i++) cin >> v[i];
    sort(v.begin(),v.end());
    ll res=0;
    for(int i=0;i+1<n;i++)
    {
        if(v[i+1]!=v[i]+1)
        {
            res+=((v[i+1]-v[i])-1);
        }
    }
    cout << res << endl;
}
