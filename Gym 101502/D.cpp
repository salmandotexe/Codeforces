#include <iostream>
#include <string.h>
#define inf 100000009
using namespace std;

int opp(int n)
{
  switch (n)
  {   //eita bhul daoar jonno mara khaisi fml.
    case 1: return 6;
    case 6: return 1;
    case 2: return 5;
    case 4: return 3;
    case 3: return 4;
    case 5: return 2;
  }
}

int dp[10005][7];
int x;

int f(int curr, int up)
{
  if(curr==0) return 0;
  if(curr<0) return inf;
  if(dp[curr][up]!=-1) return dp[curr][up];
  int minsteps=inf;
  for(auto a:{1,2,3,4,5,6})
  {
    if(a==up || a==opp(up)) continue;
    minsteps=min(minsteps,1+f(curr-a,a));
  }
  return dp[curr][up]=minsteps;
}

int main()
{
  int T;
  scanf("%d", &T);
  memset(dp,-1,sizeof(dp));
  for(int tc=1;tc<=T;tc++)
  {
    scanf("%d", &x);
    int res=f(x,1);
    cout << (res>=inf?-1:res)<<endl;
  }
}
