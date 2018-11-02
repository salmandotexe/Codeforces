#include <bits/stdc++.h>
#define vi vector<int>
using namespace std;

int pc=0;
bool cycle=0;


int main()
{
    int n;
    bool infinite=0;
    cin >> n;
    string s;
    cin >> s;
    vector<bool> visited(n,false);

    vector<int> v(n);
    for(int i=0;i<n;i++)
        cin >> v[i];

    stack<int> st;

    st.push(0);
    while(!st.empty())
    {
        int u=st.top();
        st.pop();

        if(u<0 || u >=n)
        {
            cout << "FINITE\n";
            return 0;
        }
        if(visited[u])
        {
            infinite=1;
            break;
        }
        visited[u]=1;
        if(s[u]=='>')
            st.push(v[u]+u);
        else if (s[u]=='<')
            st.push(u-v[u]);
    }
    if(infinite)
        cout << "INFINITE\n";
    else cout << "FINITE\n";
}
