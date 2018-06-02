

/*
        Solution to: http://codeforces.com/problemset/problem/858/A
*/

  #include <iostream>
  #include <stdio.h>

  //#include<bits/stdc++.h>
  using namespace std;
  typedef unsigned long ul;

  ul pow(ul a, ul n)
  {
    if(n==1)
        return a;
    if(n==0)
        return 1;
    ul x=pow(a,n/2);
    x*=x*(n&1?a:1);
    return x;

    //my github templates: https://github.com/salmandotexe
  }

  unsigned long long gcd(ul  a,ul b)
  {
    while(b)
    {
      a=a%b;
      swap(a,b);
    }
    return a;
  }
  unsigned long long lcm(ul a, ul b)
  {
    return (a/gcd(a,b))*b;
  }

  int main()
  {
    ul n; int k;
    cin >> n;
    cin >> k;
    k=pow(10,k);
    cout <<lcm(n,k)<<endl;

  }
