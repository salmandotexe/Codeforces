#include<iostream>
#include <vector>
#include <algorithm>

using namespace std;

int findindex(int i)
{
  int x;
  x=((i+1)%14)-1;
  if(x==-1)
    return 13;
  return x;
}

int computenew(int a, int *A)
{
  int w[14];
  for(int i=0;i<14;i++)
  {
    w[i]=A[i];
  }
  int temp=w[a],idx=a;//number of stones in hole i.
  w[a]-=temp;


  for(int i=0;i<14;i++)
  {
    w[i]+=temp/14;
  }
  temp%=14;

  for(int i=1;temp!=0;i++)
  {
    int x=findindex(idx+i);
    w[x]++;
    temp--;
  }
  int res=0;
  for(int i=0;i<14;i++)
  {
    res+=w[i]&1?0:w[i];
  }
  return res;
}

int main()
{
  int v[14];
  for(int i=0;i<14;i++)
  {
    cin >> v[i];
  }
  int m=-1;
  for(int i=0;i<14;i++)
  {
    if(v[i]>0)
    {
      m=max(m,computenew(i,v));
    }
  }
  cout << m;
}
