#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int x, y;

        cin >> y >> x;

        int ans;

        ans=y*100;
        ans=ans/(100+x);

        cout << ans << endl;
    }

    return 0;
}
