#include <iostream>
#include <string.h>
#define ll long long
using namespace std;


ll c[522];

int n;


int main(){
	c[3]=6;
	for(int i=4;i<=500;i++)
		c[i]=c[i-1]+1LL*i*(i-1);
	cin>> n;
	cout<<c[n]<<endl;
}
