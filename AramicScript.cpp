#include<iostream>
#include<set>
#include <string>

using namespace std;

string removeduplicates(string s)
{
  string ss="";
  int arr[27]={0};
  for(int i=0;i<s.size();i++)
  {
    arr[s[i]-'a']++;
  }
  for(int i=0;i<27;i++)
  {
    if(arr[i]>0)
      ss+=(char)('a'+i);
  }
  return ss;
}

int main()
{
  set<string> roots;
  string s;int N;
  cin >> N;
  while (N--)
  {
    cin >> s;
    roots.insert(removeduplicates(s));
  }
  cout << roots.size()<<endl;
}
