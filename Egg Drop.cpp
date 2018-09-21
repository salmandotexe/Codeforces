#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,k,a;
    string s;
    cin >> n >> k;
    int broke=k, safe =1;
    for(int i=1;i<=n;i++)
    {
        cin >> a >> s;
        if(s=="BROKEN")
            broke=min(broke,a);
        else if(s=="SAFE")
            safe=max(safe,a);
    }
    
    if(broke==safe+1)
        cout << broke<< " "<< safe<<endl;
    else
        cout << safe+1 << " "<<broke-1<<endl;
