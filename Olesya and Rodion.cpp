#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,t;
    cin >> n >> t;

    if(t!=10)
    {
        for(int i=1;i<=n;i++)
            cout << t;
        cout <<endl;
    }
    else
    {
        if(n==1)
        {
            cout << -1 <<endl;
            return 0;
        }
        if(n&1)
        {
            for(int i=0;i<(n-1)/2;i++)
                cout << 10;
            cout << 0;
        }
        else
            for(int i=0;i<n/2;i++)
                cout << 10;
    }

}
