#include <bits/stdc++.h>
#define ll long long int
#define vi vector<int>
#define vll vector<ll>
#define vvi vector < vi >
#define pii pair<int,int>
#define pll pair<long long, long long>
#define mod 1000000007
#define inf 1000000000000000001
#define all(c) c.begin(),c.end()
#define mp(x,y) make_pair(x,y)
#define mem(a,val) memset(a,val,sizeof(a))
#define eb emplace_back
#define pb push_back
#define f first
#define s second
#define fast_cin ios_base::sync_with_stdio(false);cin.tie(NULL);
#define precise fixed(cout);cout<<setprecision(16);
using namespace std;

//ostream& operator << (ostream &out, vector<int> &v) { for(auto a:v) out << a<<" "; out<<endl; }

int ask(int i, int j)
{
    cout << "? "<<i <<" "<<j <<endl;
    fflush(stdout);
    int x;
    cin >> x;
    return x;
}

int main()
{
    vi arr;
    arr.pb(4);
    arr.pb(8);
    arr.pb(15);
    arr.pb(16);
    arr.pb(23);
    arr.pb(42);

    vector<int> ans(5);
    ans[0]=ask(1,2);
    ans[1]=ask(2,3);
    ans[2]=ask(3,4);
    ans[3]=ask(4,5);

    do {
        int a0=arr[0]*arr[1];
        int a1=arr[1]*arr[2];
        int a2=arr[2]*arr[3];
        int a3=arr[3]*arr[4];
        if(a0==ans[0] && a1==ans[1] && a2==ans[2] && a3==ans[3])
        {
            cout <<"! ";
            for(int i=0;i<arr.size();i++) cout << arr[i]<<" ";
            cout << endl;
            fflush(stdout);
            return 0;
        }
    } while(next_permutation(all(arr)));
    return 0;
}
