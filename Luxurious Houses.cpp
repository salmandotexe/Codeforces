#include <bits/stdc++.h>
#define vi vector<int>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vi v(n);
    for(int i=0;i<n;i++)
        cin >> v[i];
    vi res(n);
    int mx=0;
    for(int i=n-1;i>=0;i--)
    {
        if(v[i]>mx)
        {
            mx=v[i];
            res[i]=0;
            continue;
        }
        res[i]=(v[i]<=mx?(mx-v[i]+1):0);
    }
    for(int i=0;i<n;i++)
        cout << res[i] << " ";
    cout <<endl;
}
