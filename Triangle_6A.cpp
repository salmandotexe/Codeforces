#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> v(4);
    for(int i=0;i<4;i++) cin >> v[i];
    sort(v.begin(),v.end());
    for(int i=0;i<4;i++)
        for(int j=i+1;j<4;j++)
            for(int k=j+1;k<4;k++)
            {
                if(v[i]+v[j]>v[k])
                {
                //    cout << v[i]<< " "<< v[j] << " "<< v[k]<<endl;
                    return cout << "TRIANGLE\n",0;
                }
            }
    for(int i=0;i<4;i++)
        for(int j=0;j<4;j++)
            for(int k=0;k<4;k++)
            {
                if(i==j || j==k || i==k) continue;
                    if(v[i]+v[j]==v[k])
                        return cout << "SEGMENT\n",0;
            }
    cout << "IMPOSSIBLE\n";
}
