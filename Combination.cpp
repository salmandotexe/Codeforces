#include <bits/stdc++.h>
#define pii pair<int,int>
#define mp make_pair
using namespace std;

int main()
{
    int n,a,b;
    cin >> n;

    vector<pii> X,Y;

    for(int i=0;i<n;i++)
    {
        cin >> a >> b;
        if(b==0)
            X.push_back(mp(a,b));
        else
            Y.push_back(mp(b,a));
    }
    int c=1,res=0;

    sort(Y.begin(),Y.end());
    reverse(Y.begin(),Y.end());
    sort(X.begin(),X.end());
    reverse(X.begin(),X.end());

    for(int i=0;i<Y.size();i++)
    {
        c+=Y[i].first;
        res+=Y[i].second;
        c--;
    }
    for(int i=0;i<X.size();i++)
    {
        if(c==0)
            break;
        res+=X[i].first;
        c--;
    }
    cout <<res<<endl;
}
