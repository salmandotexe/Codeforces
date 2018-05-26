
#include <iostream>
#include <vector>

using namespace std;

int main()
{
  int m, n,x;
  cin >> n >> m;
  char arr[n][m];
  int res[m]={0};

  for(int i=0;i<n;i++)
  {
    for(int j=0;j<m;j++)
    {
      cin >> arr[i][j];
      res[j]+=(arr[i][j]-'0');
    }
  }
  int red=0;
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<m;j++)
    {
      if(arr[i][j]!=0)
      {
        if(res[j]-(arr[i][j]-'0')!=0)
        {
          red=1;
          continue;
        }
        else if(res[j]-(arr[i][j]-'0')==0)
        {
          red=0;
          break;
        }
      }
    }
    if(red)
    {
      cout << "YES"; return 0;
    }
  }
  cout << "NO";return 0;
}
