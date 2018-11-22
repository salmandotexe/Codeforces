#include <bits/stdc++.h>
#define vi vector<int>
#define ll long long int
#define ull unsigned long long int
#define ld long double
#define fi first
#define se second
#define pb push_back
#define pbb pop_back
#define mp make_pair

using namespace std;

int main()
{
  int n, s;
  cin >> n >> s;
  int x=floor(s/(n*1.0));
  if(s%n)
    cout << x+1 <<endl;
  else cout << x <<endl;

}
