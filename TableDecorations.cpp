#include <iostream>
#include <vector>
#include <algorithm>

using namespace std; 


                    /*
                          Solution to: http://codeforces.com/problemset/problem/478/C
                    */
int main()
{
    vector<long long> arr(3);
    cin >> arr[0] >> arr[1] >> arr[2];
    sort(arr.begin(), arr.end());

    long long res = (arr[0] + arr[1] + arr[2]) / 3;
    if(arr[0] + arr[1] < res){res = array[0] + array[1];}
    cout << res;
    //gives result
}
