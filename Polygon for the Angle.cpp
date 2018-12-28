#include <bits/stdc++.h>

using namespace std;

int main()
{
  int t;
  cin >> t;
  while(t--)
  {
    int ang;
    cin >> ang;
    int g=__gcd(ang,180);
    int theta=180;
    theta/=g;
    ang/=g;
    //cout <<theta<<" "<<ang << endl;
    int n=theta;
    int segments=n-2;

    //segments=n-2
    //required=ang.
    if(ang>segments)
    {
      ang*=2;
      theta*=2;
    }
    cout << theta<<endl;

  }
}
