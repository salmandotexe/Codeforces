#include <bits/stdc++.h>

using namespace std;

int valid(string t, string s)//s is larger
{
    for(int i=0;i<s.size();i++)
    {
        for(int j=0;j<t.size();j++)
        {
          if(i+j==s.size()||s[i+j]!=t[j])
            break;
          if(j==t.size()-1)
          {
            return 1;
          }
        }
    }
    return 0;

}
int main()
{
    int n;
    cin >> n;
    string s;
    vector<pair<int,string>> v(n);
    for(int i=0;i<n;i++)
    {
        cin >> s;
        v[i]=make_pair((int)s.size(),s);
    }
    sort(v.begin(),v.end());
    for(int i=0;i<n-1;i++)
    {
        if(!valid(v[i].second,v[i+1].second))
        {
            cout << "NO"<<endl;
            return 0;
        }
    }
    cout << "YES\n";
    for(auto a:v)
    {
        cout << a.second <<endl;
    }

}
