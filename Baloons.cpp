#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,n,x;
    cin >> t;
    while(t--)
    {
        cin >> n;
        multiset<int> s;
        while(n--)
        {
            cin >> x;
            if(x!=0)
                s.insert(x);
        }
        cout << s.size()<<endl;
    }
}
