#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;

    cin >> t;
    int c=0;

    while(t--)
    {
        c++;

        int h1, m1, h2, m2;

        cin >> h1 >> m1 >> h2 >> m2;

        int tt1=(h1*60)+m1;
        int tt2=(h2*60)+m2;

        int ans=tt2-tt1;

        cout << "Case " << c << ": " << ans << endl;
    }

    return 0;

}
