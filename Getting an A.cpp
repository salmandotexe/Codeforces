#include <bits/stdc++.h>
#define vi vector<int>
#define pii pair<int,int>
#define all(x) x.begin(),x.end()
#define pb push_back
#define mp make_pair

using namespace std;

int main()
{
  int n;
  cin >> n;
  vi v(n);
  for(int i=0;i<n;i++) cin >> v[i];

  sort(v.begin(),v.end());
  int sum=accumulate(v.begin(),v.end(),0);
  int cnt=0;
  int i=0;
  while(10*sum<45*n)
  {
    sum+=(5-v[i++]);
    cnt++;
  }
  cout <<cnt<<endl;
}
