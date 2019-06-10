#include <bits/stdc++.h>

using namespace std;

int getmin(vector<int> &arr, int i, int j)
{
  int minima=arr[i];
  int maxima=arr[i];
  for(int x=i;x<=j;x++)
  {
    if(arr[x]>maxima)
      maxima=arr[x];
    if(arr[x]<minima)
      minima=arr[x];
  }
  return abs(maxima-minima);
}
int main()
{
  int n,m,x;
  cin >> n >> m;
  vector<int> v;
  while(m--)
  {
    cin >> x;
    v.push_back(x);
  }
  sort(v.begin(),v.end());

  int N=v.size();
  int minn=1001;
  for(int i=0;i<N-n+1;i++)
    minn=min(minn,getmin(v,i,i+n-1));
  cout << minn<<endl;
}
