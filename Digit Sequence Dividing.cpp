#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define pb push_back
#define mp make_pair

using namespace std;
ostream& operator << (ostream &out, vector<int> &v)
{
  for(auto a:v)
    out << a<< " ";
  out<<endl;
}

int main()
{
  int q;
  cin >> q;
  for(int t=0;t<q;t++)
  {
    int n;
    cin >> n;
    string s;
    cin >> s;
    if(n==1 ||( n==2 && s[0]>=s[1]))
    {
      cout <<"NO\n";
      continue;
    }
    else
    {
      cout <<"YES\n";
      cout << 2 <<endl;cout<<s[0]<< " ";
      for(int i=1;i<n;i++)cout <<s[i];cout<<endl;

    }
  }
}
