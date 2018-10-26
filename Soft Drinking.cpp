#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,k,l,c,d,p,nl,np;
    cin>> n >> k >> l >> c >> d >> p >> nl >> np;
    int res=99999999;
    res=min((int)floor((k*l)/double(nl*n)),res);
    res=min((int)floor((c*d)/double(n)),res);
    res=min((int)floor(p/double(np*n)),res);
    cout << res<<endl;

}
