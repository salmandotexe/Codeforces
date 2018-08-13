#include <iostream>

using namespace std;

int main()
{
    int n,a,b;
    cin >> n;
    int res=0;
    while(n--)
    {
        cin >> a >> b;

        if(b-a>=2)
            res++;
    }
    cout << res << endl;
}
