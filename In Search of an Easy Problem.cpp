#include <bits/stdc++.h>
//edit: typo in name.
using namespace std;
typedef long long ll;

typedef vector<int> vi;
typedef vector<ll> vl;

int main()
{
  int n,x;
  cin >> n;
  int res=0;
  for(int i=0;i<n;i++)
  {
    cin >> x;
    res=res||x;
  }
  if(res==1)
    cout << "HARD\n";
  else
    cout << "EASY\n";
}
