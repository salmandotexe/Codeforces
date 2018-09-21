#include <bits/stdc++.h>
using namespace std;

//Team NSU_BicharChai
struct data {
    string first, second;
};
bool cmp (data a, data b)
{
    if (a.second == b.second){
        return a.first < b.first;
    }
    else {
        return a.second < b.second;
    }
}
int main ()
{
    int n;
    cin >> n;
    data ara[n];
    for (int i = 0; i<n; i++){
        cin >> ara[i].first >> ara[i].second;
    }
    sort (ara, ara+n, cmp);
    for (int i = 0; i<n; i++){
        cout << ara[i].first << " " << ara[i].second << endl;
    }
    return 0;
}
