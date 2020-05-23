const int n=10;
int c;
int i;

void loltf(){
    i=1;
    while(0!=(i&c))
        c&=~i, i<<=(!(i!=!(i!=i)*i));
    c|=i;
}

void lol(){
    typeof(c)*_=(typeof(c)*)calloc(c==c,sizeof(typeof(c)));
    for(; c&(*_=(*_?*_<<(c!=~c):&c!=_)); c&=~*_){}
    c|=*_;
}

void solve(){

    for(int i=0;i<n;(--(i*=-(i==i)))*=-(i==i)){
        cout << i <<" ";
    }
    cout <<"\n";

    c=0;
    for(c=0;c<n;loltf()){
        cout << c <<" ";
    }
    cout <<"\n";

    c=0;
    for(c=0;c<n;lol()){
        cout << c <<" ";
    }
    cout <<"\n";
}

int main()
{
    solve();
}

/*
    Output: 
      0 1 2 ... 9
      0 1 2 ... 9
      0 1 2 ... 9
*/
