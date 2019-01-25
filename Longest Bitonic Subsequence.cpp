#include <bits/stdc++.h>
#define ll long long
#define inf INT_MAX
using namespace std;

int arr[1005];
int n;

void lids()
{
  vector<vector<int> > LI(n);
  LI[0].push_back(arr[0]);

  for (int i = 1; i < n; i++)
  {
    for (int j = 0; j < i; j++)
    {
      /* L[i] = {Max(L[j])} + arr[i]
      where j < i and arr[j] < arr[i] */
      if ((arr[i] > arr[j]) && (LI[i].size() < LI[j].size() + 1))
          LI[i] = LI[j];
    }
    LI[i].push_back(arr[i]);
  }


  vector<vector<int> > LD(n);

  for (int i = n-1; i >=0; i--)
  {
    for (int j = n-1; j > i; j--)
    {
      /* L[i] = {Max(L[j])} + arr[i]
      where j < i and arr[j] < arr[i] */
      if ((arr[i] > arr[j]) && (LD[i].size() < LD[j].size() + 1))
          LD[i] = LD[j];
    }
    LD[i].push_back(arr[i]);
  }

  int mx=0;
  for(int i=0;i<n;i++)
    mx=max(mx,int(LD[i].size())+int(LI[i].size())-1);
  cout<<mx<<endl;
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;

  while(t--)
  {
    cin >> n;
    for(int i=0;i<n;i++) cin >> arr[i];
    lids();
  }
}
