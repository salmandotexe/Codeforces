#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,c,d;
    int t;
    cin >> t;
    while(t--)
    {
        cin >> a >> b >> c >> d;
        double ab=0.0;
        double cd=0.0;
        ab=b*log10(a);
        cd=d*log10(c);
        if(ab<cd)
            cout << "<"<<endl;
        else
            cout << ">"<<endl;
    }
}
