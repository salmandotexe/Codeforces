#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int x;
    while (n--)
    {
      cin >> x;
      cout << (360%(180-x)?"NO":"YES")<<endl;
    }
}
