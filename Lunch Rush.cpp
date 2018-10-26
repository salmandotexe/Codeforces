#include <bits/stdc++.h>
#define mp make_pair

using namespace std;

int main()
{
    int fi,ti;
    int n,k;
    cin>> n >>k;
    multiset<pair<int,int>> m;
    for(int i=0;i<n;i++)
    {
        cin >> fi >> ti;
        if(ti>k)
            fi-=(ti-k);
        m.insert(mp(fi,ti));
    }
    cout << m.rbegin()->first<<endl;
}
