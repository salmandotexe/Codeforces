#include <bits/stdc++.h>
#define vi vector<int>

using namespace std;

int n,k;
int arr[(int)1e5+2];

void vinput(){for(int i=0;i<n;i++)cin >> arr[i];}

int main()
{
  cin >> n >> k;
  vinput();
  sort(arr,arr+n);

  int c=0;
  for(int i=0;i<n&&c<k;i++)
  {
    if(i==0)
    {
      cout << arr[i]<<endl;
      c++;
      continue;
    }
    if(arr[i]-arr[i-1]==0)
      continue;
    cout << arr[i]-arr[i-1]<<endl;
    c++;
  }
  while(c<k)
  {
    cout << 0<<endl;
    c++;
  }
}
