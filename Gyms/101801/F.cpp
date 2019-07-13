#include <bits/stdc++.h>

#define ll long long
#define vll vector<ll>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        ll res=0;
        int n;
        cin >> n;
        while(n--)
        {
            ll x;
            cin >> x;
            res = res xor x;
        }
        if(res==0){
            cout << 1 << endl;
        }
        else cout << 0 <<endl;
    }
}
