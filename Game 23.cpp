#include <bits/stdc++.h>
#include <vector>
#define vi vector<int>
using namespace std;
int x;

int main()
{
  int a,b;
  cin >> a >> b;
  if(b%a != 0){
    cout <<-1<<endl;
    return 0;
  }
  else{
    int res=b/a;
    int steps=0;
    while(res){
      if(res%2==0){
        res/=2;
        steps++;
      }
      else if(res%3==0){
        res/=3;
        steps++;
      }
      else break;
    }
    if(res==1){
      cout <<steps<<endl;
    }
    else{
      cout<<-1<<endl;
    }
  }
}
