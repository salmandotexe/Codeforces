#include <bits/stdc++.h>

using namespace std;


bool isluckyint(long long a)
{
    if(a==0)
        return false;
    while(a)
    {
        int res=a%10;
        if(!(res==4 || res==7))
            return false;
        a/=10;
    }
    return true;
}
int main()
{
    unsigned long long x;
    cin >> x;
    int c=0;
    while(x)
    {
        int res=x%10;
        if(res==4 || res==7)
            c++;
        x/=10;
    }
    if(isluckyint(c))
        cout << "YES\n";
    else
        cout << "NO\n";
}
