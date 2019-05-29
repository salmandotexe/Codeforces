#include <bits/stdc++.h>
#define vi vector<int>
#define pb push_back
using namespace std;

int main()
{
    string a,b;
    cin >> a >> b;
    int n=min(a.size(),b.size());
    if(a.size()>b.size()) swap(a,b);
    vi pos;
    for(int i=0;i<n;i++)
    {
        if(a[i]==b[i]) continue;
        else pos.pb(i);
    }
    if(pos.size()==2)
    {
        swap(a[pos[0]],a[pos[1]]);
        if(a==b){
            cout <<"YES\n";
            return 0;
        }
    }
    cout <<"NO\n";
}
