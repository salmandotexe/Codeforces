#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define vi vector<int>
using namespace std;

ostream& operator << (ostream &out, vector<int> &v)
{
  for(auto a:v)
    out << a;
  out<<endl;
}

int main()
{
  string table;
  cin >> table;
  vector<string> hand(5);
  for(int i=0;i<5;i++)
    cin >> hand[i];

  for(int i=0;i<5;i++)
  {
    char rank=hand[i][0];
    char suit=hand[i][1];
    if(rank==table[0]||suit==table[1])
    {
      cout << "YES\n";
      return 0;
    }
  }
  cout << "NO\n";
}
