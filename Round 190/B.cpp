#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long a,b,c,res=0;
    cin >> a >> b >> c;
    for(int i=0;i<3;i++)
        if(min({a,b,c})>=i)
            res=max(res, i + (a-i)/3 + (b-i)/3 + (c-i)/3);
    cout << res << endl;
}
