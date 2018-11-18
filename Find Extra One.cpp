#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,x,y;
    cin >> n;
    int sX=0,lX=0;
    for(int i=0;i<n;i++)
    {
        cin >> x >> y;
        if(x<0)
            sX++;
        else if (x>0)
            lX++;
    }
    if(sX==0||sX==1 || lX==0 || lX==1)
        cout << "Yes\n";
    else cout << "No\n";
}
