#include <bits/stdc++.h>

//not yet complete.

using namespace std;
typedef long long ll;

int main()
{
  long long n,k,s,d,i;
  ll dist=0,delta;
  cin >> n >> k >> s;
  if(k*(n-1)<s || k>s)
    cout << "NO\n";
  else
  {
    cout << "YES\n";
    ll d=floor((s-k)/(n-1));  //s-k covered in k.
    delta=k-d;
    for(i=0;i<d;i++)
      cout << (i&1?1:n)<< " ";
    dist+=d*(n-1);
    //d&1=at 1.
    //cout << endl << s-dist <<" need to cover in "<< delta<<endl;
    ll alpha= (s-dist - delta) + 1;
    ll curpos;
    if(i&1)
      curpos=1+alpha;
    else
      curpos=n-alpha+1;
    cout << curpos<< " ";
    for(ll i=1;i<delta;i++)
    {
      if(i&1)
        cout << curpos-1<< " ";
      else
        cout << curpos<< " ";
    }
    cout << endl;

  }
  main();
}
