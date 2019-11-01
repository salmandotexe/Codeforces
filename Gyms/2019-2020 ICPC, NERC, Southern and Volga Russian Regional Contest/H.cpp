#include <bits/stdc++.h>
using namespace std;

#define BIG 100000000

int ara[11];

string ret;

int main()
{
    #ifdef forthright48
    freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    #endif

    int tc;
    cin >> tc;
    for(int ks=1; ks<=tc; ks++) {
        int mn = BIG;
        int mnID = -1;
        int has = -1;
        for(int i=0; i<=9; i++) {
            cin >> ara[i];
            if(i>0) {
                if(ara[i]<mn) {
                    mn = ara[i];
                    mnID = i;
                }
                if(has==-1) {
                    has = i;
                }
            }
        }

        //cout << "mn = " << mn << ", mnID = " << mnID << endl;

        int mn0 = ara[0]+1, mnP = mn+1, pid = mnID;

        //cout << "mn0 = " << mn0 << ", mnP = " << mnP << ", pid = " << pid << ", has = " << has << endl;

        ret = "";

        if(has==-1) {
            printf("1\n");
        }
        else {
            if(mn0+1<=mnP) {
                ret += (char)(has+'0');

                for(int i=0; i<mn0; i++) {
                    ret += '0';
                }
            }
            else {
                for(int i=0; i<mnP; i++) {
                    ret += (char)(pid + '0');
                }
            }

            cout << ret << "\n";
        }

    }

    return 0;
}
