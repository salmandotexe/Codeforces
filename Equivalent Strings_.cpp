#include <bits/stdc++.h>
#define mp make_pair
using namespace std;

map<pair<string, string >, bool> M;

bool same(string A, string B)
{
    if(M.count(mp(A,B)))
        return M[mp(A,B)];
    if(A.size()&1)
        return M[mp(A,B)]=(A==B);
    else
    {
        int n=A.size()/2;
        string a1=string(A.begin(),A.begin()+n);
        string b1=string(B.begin(),B.begin()+n);

        string a2=string(A.begin()+n,A.end());
        string b2=string(B.begin()+n,B.end());

        if(same(a1,b1) && same(a2,b2))  return M[mp(A,B)]=1;
        if(same(a1,b2) && same(a2,b1)) return M[mp(A,B)]= 1;
        return M[mp(A,B)]=0;
    }
}
int main()
{
    string A,B;
    cin >> A >> B;
    if(same(A,B))
        cout << "YES\n";
    else
        cout <<"NO\n";
}
