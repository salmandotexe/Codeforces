#include <bits/stdc++.h>
#define vi vector<int>
#define pb push_back
#define ll long long

using namespace std;

int main()
{
    int n;
    ll res=0;
    ll sum=0;
    cin >> n;
    vi v(n);
    for(int i=0;i<n;i++)
    {
        cin >> v[i];
        sum+=v[i];
    }
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++)
    {
        if(!(sum&1)&&(sum-v[i])&1)
        {
            sum-=v[i];
            break;
        }
    }
    if(sum&1)
        cout << sum<<endl;
    else
        cout << 0<<endl;
}
