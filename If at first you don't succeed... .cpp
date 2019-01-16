#include <bits/stdc++.h>
#define vi vector<int>
#define pii pair<int,int>
#define all(x) x.begin(),x.end()
#define pb push_back
#define mp make_pair

using namespace std;

int main()
{
  int A,B,C,N;
  cin >> A >> B >> C >> N;
  if(C>A || C>B)
  {
    cout << -1<<endl;
    return 0;
  }
  if(N-(A+B-C)>=1 && !(A+B-C>=N))
    cout << N-(A+B-C)<<endl;
  else cout <<-1<<endl;
}
