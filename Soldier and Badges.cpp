#include <bits/stdc++.h>
#define vi vector<int>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vi arr(int(1e5));
    vi freq(int(1e5));
    for(int i=1;i<=n;i++)
    {
        cin >> arr[i];
        freq[arr[i]]++;
    }
    int cost=0;
    for(int i=1;i<=n;i++)
    {
        int u=arr[i];
        if(freq[u]>1)
        {
            while(freq[u]>1)
            {
                for(int x=0;;x++)
                    if(freq[u+x]==0) {cost+=x;freq[u+x]++;break;}
                freq[u]--;
            }
        }

    }
    cout << cost <<endl;

}
