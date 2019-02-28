#include <bits/stdc++.h>
#define mp make_pair
#define pii pair<int,int>
#define all(x) x.begin(),x.end()

using namespace std;

const int maxn = 2e5+10;

int a[maxn];

int main()
{
  int t,n,li,ri;
  cin >> t;
  while(t--)
  {
    cin >> n;
    vector<pair<pii,int> > arr(n);
    for(int i=0;i<n;i++) { cin >> li >> ri; arr[i]=mp(mp(li,ri),i);}
    sort(all(arr));
    int curr=1;
    int maxx=0;
    for(int i = 0; i<n; i++)
    {
      a[arr[i].second]=curr;
      maxx=max(arr[i].first.second, maxx);

      if(i<n-1 && curr==1 && maxx<arr[i+1].first.first)
        curr++;
    }



    if(curr == 1)
    {
      cout <<-1<<endl;
      continue;
    }
    else
    {
      for(int i=0;i<n;i++) cout << a[i]<< " ";
      cout<<endl;
    }

  }

}
