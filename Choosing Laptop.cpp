#include <bits/stdc++.h>

using namespace std;


int main()
{
  int n,a,b,c,d;
  cin >> n;
  vector<vector<int>> arr(n+1,vector<int>(4));
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<4;j++)
      cin >> arr[i][j];
  }
  bool inferior[101];
  memset(inferior,false,sizeof(inferior));
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<n;j++)
    {
      if(arr[i][0]<arr[j][0] && arr[i][1]<arr[j][1] && arr[i][2]<arr[j][2])
        inferior[i]=1;
    }
  }
  int ans=-1;
  int cost=1001;
  for(int i=0;i<n;i++)
    if(!inferior[i] && arr[i][3]<cost)
    {
      cost=arr[i][3];
      ans=i;
    }
  cout << ans+1<<endl;
}
