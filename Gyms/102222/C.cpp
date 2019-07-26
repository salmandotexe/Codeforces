#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for(int tc=1;tc<=t;tc++)
    {
        int n,m;
        cin >> n >> m;
        string a,b,c;
        cin >> a >> b >> c;
        int offset = b.back()-a.back();
        cout <<"Case #"<<tc<<": ";
        for(auto x:c)
        {
            char character=(char)(x-offset);
            if(character<'A') character+=26;
            if(character>'Z') character-=26;
            cout << character;
        }
        cout << endl;
    }

}
