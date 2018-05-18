#include<iostream>

using namespace std;

int findindex(int i)
{
  int x;
  x=((i+1)%14)-1;
  if(x==-1)
    return 13;
  return x;
}

int main()
{
  int v[14];
  for(int i=0;i<14;i++)
  {
    cin >> v[i];
  }
  int res=-1;
  //Process of adding stones is repeated every 14 holes. so number of stones added per hole = k/14 where k is number of stones of specified hole
  for(int i=0;i<14;i++)
  {
    int temp[14]={0},p=i+1;
    for(int j=0;j<14;j++)
    {
      //copy the array
      temp[j]=v[j];
    }
    int k=temp[i];  //stones in hole specified
    temp[i]=0;
    for(int j=0;j<14;j++)
    {
        temp[j]+=k/14;  //got us covered if stones >14.
    }
    k%=14;
    //now it is guaranteed that stones <14
    while(k--)
    {
      p=(p==14?0:p);
      temp[p++]++;
    }
    int res_interm=0;
    for(int j=0;j<14;j++)
    {
        res_interm+=(temp[j]&1)?0:temp[j];
    }
    res=max(res,res_interm);
  }
  cout << res;
}
