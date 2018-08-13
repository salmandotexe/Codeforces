//https://codeforces.com/problemset/problem/271/A
#include <bits/stdc++.h>

using namespace std;


int check(int a)
{
    int arr[10]={0};
    while(a)
    {
        int rem=a%10;
        //cout << rem;
        arr[rem]++;
        if(arr[rem]==2)
            return 0;
        a/=10;
    }
    return 1;
}
int main()
{

    int x,n;

    cin >> x;
    while(1)
    {
        if(check(++x))
        {
            cout << x << endl;
            return 0;
        }
    }
}
