#include <bits/stdc++.h>
#define ll long long int
#define vi vector<int>
#define vll vector<ll>
#define vvi vector < vi >
#define pii pair<int,int>
#define pll pair<long long, long long>
#define mod 1000000007
#define inf 1000000000000000001;
#define all(c) c.begin(),c.end()
#define mp(x,y) make_pair(x,y)
#define mem(a,val) memset(a,val,sizeof(a))
#define RNDFN std::mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
#define ran(a,b) rng() % ((b) - (a) + 1) + (a)
#define eb emplace_back
#define pb push_back
#define f first
#define s second
#define fast_cin ios_base::sync_with_stdio(false);cin.tie(NULL);
#define precise fixed(cout);cout<<setprecision(16);
#define MAXN (int(1e5+5))
using namespace std;

std::mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());




bool prime[MAXN+5];
bool isprime(int a)
{
  if(a<=1 ) return false;
  if(a<MAXN) return prime[a];

  for(int i=1;i*i<=a;i++) if(prime[i] && a%i==0) return false;

  return true;
}
int main()
{
  memset(prime,true,sizeof(prime));
  prime[0]=prime[1]=false;

  for(int i=2; i*i <= MAXN ; i++) for(int j = i*i; j < MAXN ; j += i)
    prime[j] =false;
  int n;
  cin >> n;

  if(isprime(n))
  {
    cout << 1<<endl<<n<<endl;
    return 0;
  }
  for(int _trials=0; _trials<25000 ;_trials++)
  {
    //cout << a <<endl;
    int a=ran(2,n-1);
    int b=n-a;
    //cout << b <<endl;
    if(isprime(a))
    {
      if(isprime(b))
      {
        cout << 2 <<endl << a << " " << b <<endl;
        //cout << "trials: "<<trials<<endl;
        return 0;
      }
      else
      {
        int c=ran(2,b-1);
        if(isprime(c) &&isprime(b-c))
        {
          cout << 3 <<endl << a << " "<< c <<" "<< b-c <<endl;
          //cout << "trials: "<<trials<<endl;
          return 0;
        }
      }
    }

  }

  //a type of Monte Carlo algorithm
}
