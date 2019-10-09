//geometry + DSU problem
///====================== TEMPLATE STARTS HERE =====================///
#include <bits/stdc++.h>
using namespace std;

//#include <ext/pb_ds/assoc_container.hpp> // Include for built in treap
//#include <ext/pb_ds/tree_policy.hpp>
//using namespace __gnu_pbds;

//#include <sys/resource.h>     // for linux stack memory increase
//#define gc getchar_unlocked   // for linux fast io
//#define gc getchar            // for windows fast io

#define pb push_back
#define MP make_pair
#define ff first
#define ss second
#define nl puts("")
#define sp printf(" ")
#define phl debug("Hello")
#define FOR(i,x,y) for(vlong i = (x) ; i <= (y) ; ++i)
#define ROF(i,x,y) for(vlong i = (y) ; i >= (x) ; --i)
#define CLR(x,y) memset(x,y,sizeof(x))
#define ALL(x) (x).begin(),(x).end()
#define SZ(x) ((vlong)(x).size())
#define UNIQUE(V) (V).erase(unique((V).begin(),(V).end()),(V).end())
#define MIN(a,b) ((a)<(b)?(a):(b))
#define MAX(a,b) ((a)>(b)?(a):(b))
#define ABS(x) ((x)<0?-(x):(x))
#define FABS(x) ((x)+eps<0?-(x):(x))
#define SQ(x) ((x)*(x))
#define LCM(x,y) (((x)/gcd((x),(y)))*(y))
#define POPCOUNT __builtin_popcountll
#define RIGHTMOST __builtin_ctzll
#define LEFTMOST(x) (63-__builtin_clzll((x)))
#define NUMDIGIT(x,y) (((vlong)(log10((x))/log10((y))))+1)
#define NORM(x) if(x>=mod) x-=mod;if(x<0) x+=mod;
#define ODD(x) (((x)&1)==0?(0):(1))
#define Set(N,p) N=((N)|((1LL)<<(p)))
#define Reset(N,p) N=((N)&(~((1LL)<<(p))))
#define Check(N,p) (!(((N)&((1LL)<<(p)))==(0)))
#define fast_cin ios_base::sync_with_stdio(false);cin.tie(NULL)
#define arrayIndexPrint(A,i) cerr<<"~ At pos: "<<i<<" = "<<A[i]
#define dump(x) cerr<<"~ "<<#x<<" = "<<x<<endl
#define arrayPrint(A,st,ed) cerr<<"~ Array:";FOR(i,st,ed) cerr<<" "<<A[i];cerr<<endl
#define LINE cerr<<"\n"; FOR(i,0,50) cerr<<"=";cerr<<"\n\n"

#define LL long long
#define LLU long long unsigned int
typedef long long vlong;
typedef unsigned long long uvlong;
typedef pair < int, int > pii;
typedef pair < vlong, vlong > pll;
typedef vector<int> vi;
typedef vector<vlong> vl;
typedef vector<pll> vll;
//typedef tree <int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pb_ds;

#ifdef forthright48
     #include <ctime>
     clock_t tStart = clock();
     #define debug(args...) {dbg,args; cerr<<endl;}
     #define timeStamp debug ("Execution Time: ", (double)(clock() - tStart)/CLOCKS_PER_SEC)
     #define bug printf("%d\n",__LINE__);

#else
    #define debug(args...)  // Just strip off all debug tokens
    #define timeStamp
#endif

struct debugger{
    template<typename T> debugger& operator , (const T& v){
        cerr<<v<<" ";
        return *this;
    }
}dbg;

inline vlong gcd ( vlong a, vlong b ) {
    a = ABS ( a ); b = ABS ( b );
    while ( b ) { a = a % b; swap ( a, b ); } return a;
}

vlong ext_gcd ( vlong A, vlong B, vlong *X, vlong *Y ){
    vlong x2, y2, x1, y1, x, y, r2, r1, q, r;
    x2 = 1; y2 = 0;
    x1 = 0; y1 = 1;
    for (r2 = A, r1 = B; r1 != 0; r2 = r1, r1 = r, x2 = x1, y2 = y1, x1 = x, y1 = y ) {
        q = r2 / r1;
        r = r2 % r1;
        x = x2 - (q * x1);
        y = y2 - (q * y1);
    }
    *X = x2; *Y = y2;
    return r2;
}

inline vlong modInv ( vlong a, vlong m ) {
    vlong x, y;
    ext_gcd( a, m, &x, &y );
    x %= m;
    if ( x < 0 ) x += m;
    return x;
}

inline vlong bigmod ( vlong a, vlong p, vlong m ) {
    vlong res = 1 % m, x = a % m;
    while ( p ) {
        if ( p & 1 ) res = ( res * x ) % m;
        x = ( x * x ) % m; p >>= 1; /// For bigmod2 multiply here using mulmod
    }
    return res;
}


//int knightDir[8][2] = { {-2,1},{-1,2},{1,2},{2,1},{2,-1},{-1,-2},{1,-2},{-2,-1} };
//int dir4[4][2] = {{-1,0},{0,1},{1,0},{0,-1}};
//int dir8[8][2] = {{-1,0},{0,1},{1,0},{0,-1},{-1,-1},{1,1},{1,-1},{-1,1}};
const vlong inf = 2147383647;
const vlong mod = 1000000007;
const double pi = 2 * acos ( 0.0 );
const double eps = 1e-11;
//mt19937 rng(chrono::steady_clock::now().time_since_epoch().count()); /// For generating random numbers

///======================  TEMPLATE ENDS HERE  =====================///

/// Geometry Base Template
/// Include necessary functions from here to use in other codes
/// If coordinates are double, change accordingly

struct Point {
    LL x, y;
    Point(){}
    Point(LL a, LL b){
        x = a, y = b;
    }
    Point operator - (const Point &t) const{
        Point res;
        res.x = x - t.x;
        res.y = y - t.y;
        return res;
    }
};

LL sqrDist(Point P, Point Q) {
    return (P.x - Q.x) * (P.x - Q.x) + (P.y - Q.y) * (P.y - Q.y);
}

double dist(Point P, Point Q) {
    double res = (P.x - Q.x) * (P.x - Q.x) + (P.y - Q.y) * (P.y - Q.y);
    return sqrt(res);
}

/// 0 = Collinear, 1 = Clockwise, 2 = Counterclockwise.
int orientation(Point P, Point Q, Point R) {
    LL ret = (Q.y - P.y) * (R.x - Q.x) - (Q.x - P.x) * (R.y - Q.y);
    if (ret > 0) return 1; /// Polar angle of (Q - R) is smaller than (P - Q) with respect to x axis.
    if (ret < 0) return 2; /// Polar angle of (Q - R) is greater than (P - Q) with respect to x axis.
    return 0; /// Co linear
}

double polygonArea(vector<Point> polygon) {
    double area = 0;
    for (int i = 1; i + 1 < polygon.size(); i++){
        area += (polygon[i].y - polygon[0].y) * (polygon[i + 1].x - polygon[i].x)
                - (polygon[i].x - polygon[0].x) * (polygon[i + 1].y - polygon[i].y);
    }
    return FABS(area / 2.0);
}

/// Compute A X B:
int crossAB(Point A, Point B){
    return (A.x * B.y - A.y * B.x);
}

/// Compute A dot B:
int dotAB(Point A, Point B){
    return (A.x * B.x + A.y * B.y);
}

/// Compute the cross product AB X AC
int crossABC(Point A, Point B, Point C) {
    Point AB = Point(B.x - A.x, B.y - A.y); /// AB vector
    Point AC = Point(C.x - A.x, C.y - A.y); /// AC vector
    return crossAB(AB, AC);
}

/// Compute the dot product AB dot BC
int dotABC(Point A, Point B, Point C) {
    Point AB = Point(B.x - A.x, B.y - A.y); /// AB vector
    Point BC = Point(C.x - B.x, C.y - B.y); /// BC vector
    return dotAB(AB, BC);
}

/// The angle between two vectors:
double angle(Point A, Point B){
    double ans = fabs((atan2(A.y, A.x) - atan2(B.y, B.x)));
    return ans > pi+eps ? 2*pi-ans : ans;
}

/// Returns angle from positive X
/// If we consider a line from origin to the point P then this function
/// returns the angle between the positive X axis and that line.
double angelFromAxis(Point P){
    double ang = atan2(P.y, P.x);
    if(ang+eps<0.0) ang += 2.0*pi;
    return ang;
}

/// Rotate the point p by "angle" degree with respect to the point a
Point rotatePoint(Point a, double angle, Point p){
    double s = sin(angle);
    double c = cos(angle);
    // translate point back to origin:
    p.x -= a.x;
    p.y -= a.y;
    // rotate point
    double xnew = p.x * c - p.y * s;
    double ynew = p.x * s + p.y * c;
    // translate point back to initial:
    p.x = xnew + a.x;
    p.y = ynew + a.y;
    return p;
}

/// Circle Geometry
/// Use necessary functions related to circle
/// Don't forget to include base template

struct circleGeometry{

    /// Find the intersection points of a line and a circle
    /// Parameters: Circle center, radius, line end points P1 and P2
    pair<Point,Point> lineCircleIntersectionPoints(Point center, double r, Point P1, Point P2){
        double a1 = P2.x - P1.x;
        double a2 = P2.y - P1.y;
        double b1 = P1.x - center.x;
        double b2 = P1.y - center.y;

        // At^2 + Bt + C = 0
        double A = SQ(a1) + SQ(a2);
        double B = (a1*b1 + a2*b2)*2;
        double C = SQ(b1) + SQ(b2) - SQ(r);

        if((B*B - 4.0*A*C)<0){
            /// Does not intersect
        }else if((B*B - 4.0*A*C) == 0){
            /// The line is tangent with the circle at a single point
        }else{
            /// The line intersect the circle at two points
            double t1 = (-B - sqrt(B*B - 4.0*A*C))/2.0/A;
            double t2 = (-B + sqrt(B*B - 4.0*A*C))/2.0/A;

            Point E1 = {P1.x + a1*t1, P1.y + a2*t1};
            Point E2 = {P1.x + a1*t2, P1.y + a2*t2};
            return MP(E1,E2);
        }
    }

    /// Find intersected area of two circles
    /// Parameters: 1st circle center, radius, 2nd circle center, radius
    double circleCircleIntersectionArea(Point P0, double R0, Point P1, double R1) {
        double d = dist(P0, P1);
        if(R0 + R1 <= d) return 0;
        if(R0 >= R1 && (R0 - R1) >= d) return pi * SQ(R1);
        if(R0 <= R1 && (R1 - R0) >= d) return pi * SQ(R0);

        double CAD = 2.0 * acos((SQ(R0) + SQ(d) - SQ(R1)) / (2.0 * R0 * d));
        double CBD = 2.0 * acos((SQ(R1) + SQ(d) - SQ(R0)) / (2.0 * R1 * d));

        //double A1 = (0.5 * SQ(R0) * CAD) - (0.5 * SQ(R0) * sin(CAD));
        double A1 = 0.5 * SQ(R0) * (CAD - sin(CAD));
        //double A2 = (0.5 * SQ(R1) * CBD) - (0.5 * SQ(R1) * sin(CBD));
        double A2 = 0.5 * SQ(R1) * (CBD - sin(CBD));
        return (A1 + A2);
    }

    /// Find intersection points of two circles
    /// Parameters: 1st circle center, radius, 2nd circle center, radius
    bool circleCircleIntersectionPoints(Point P0, double R0, Point P1, double R1) {
        double d = dist(P0, P1);

        //cout << "p0x = " << P0.x << ", p0y = " << P0.y << ", R0 = " << R0 << endl;
        //cout << "p1x = " << P1.x << ", p1y = " << P1.y << ", R1 = " << R1 << endl;
        //cout << "d = " << d << ", R0+R1 = " << R0+R1 << endl;

        if(d > R0 + R1){
            /// They don't intersect.
            //cout << "here 1\n";
            return false;

        }else if(d < FABS(R0 - R1)){
            /// One fully contains the other one.
            //cout << "here 2\n";
            return true;

        }else if(FABS(d - 0)<eps && R0 == R1){
            /// Both are same circle.
            //cout << "here 3\n";
            return true;

        }else{
            /// The circles intersect with each other

            double a = (SQ(R0) - SQ(R1) + SQ(d))/(2.0 * d);
            double b = d - a;
            double h = sqrt(SQ(R0) - SQ(a));

            double rx = -(P1.y - P0.y) * (h/d);
            double ry = (P1.x - P0.x) * (h/d);

            Point P2;
            P2.x = P0.x + (a * (P1.x - P0.x))/d;
            P2.y = P0.y + (a * (P1.y - P0.y))/d;

            Point E1 = {P2.x + rx, P2.y + ry};
            Point E2 = {P2.x - rx, P2.y - ry};

            /// E1, E2 are the intersection points. Return if needed.

            //cout << "here 4\n";
            return true;
        }
    }

    /// Find the center of the circle which pass through point a & b having radius R.
    void findCenterGivenTwoPointsOnIt(Point a, Point b, double R) {
        Point g1,g2;
        double x1 = a.x, x2 = b.x;
        double y1 = a.y, y2 = b.y;
        double d = dist(a, b);
        if (d * d > 4.0 * R * R) {
            /// Not Possible to Find any Center;
            return;
        }
        double x_part = sqrt(R * R - 0.25 * d * d) * (y1 - y2) / d;
        double y_part = sqrt(R * R - 0.25 * d * d) * (x2 - x1) / d;
        double x3 = 0.5 * (x1 + x2), y3 = 0.5 * (y1 + y2);
        g1 = Point(x3 + x_part, y3 + y_part); /// One possible center
        g2 = Point(x3 - x_part, y3 - y_part); /// Another possible center
    }

    /// Given 3 points A, B, C on the circumference of a circle
    /// Find the center of that circle
    Point circleCenter(Point A, Point B, Point C) {
        double yDelta_a = B.y - A.y;
        double xDelta_a = B.x - A.x;
        double yDelta_b = C.y - B.y;
        double xDelta_b = C.x - B.x;
        Point center = Point(0.0, 0.0);

        double aSlope = yDelta_a/xDelta_a;
        double bSlope = yDelta_b/xDelta_b;
        center.x = (aSlope*bSlope*(A.y - C.y) + bSlope*(A.x + B.x)
                    - aSlope*(B.x + C.x) )/(2* (bSlope - aSlope));
        center.y = -1*(center.x - (A.x + B.x)/2)/aSlope +  (A.y + B.y)/2;
        return center;
    }

}circleGeo;

#define SIZE 1005

int N;
LL W, L;
int parent[SIZE];
int sz[SIZE];

LL X[SIZE], Y[SIZE], R[SIZE];

LL minX[SIZE], maxX[SIZE];

void makeset(int u) {
    parent[u] = u;
    sz[u] = 1;
}

void init_disjoint_set() {
    for(int i=0; i<N; i++) {
        makeset(i);
        minX[i] = X[i]-R[i];
        maxX[i] = X[i]+R[i];
    }
}

int FindRepresentative(int r) {  //with path compression
    if(parent[r]==r) {
        return r;
    }

    parent[r] = FindRepresentative(parent[r]);

    return parent[r];
}

int FindSize(int r) {
    return sz[FindRepresentative(r)];
}

void Union(int a, int b) {
    int u = FindRepresentative(a);
    int v = FindRepresentative(b);

    if(u!=v) {
        parent[u] = v;
        sz[v] += sz[u];

        minX[v] = min(minX[v], minX[u]);
        maxX[v] = max(maxX[v], maxX[u]);
    }
}

int mark[SIZE];

int main () {
    #ifdef forthright48
    freopen ( "input.txt", "r", stdin );
    //freopen ( "output.txt", "w", stdout );
    #endif // forthright48

    //fast_cin;

    int tc;
    scanf("%d", &tc);
    for(int ks=1; ks<=tc; ks++) {
        scanf("%d %lld %lld", &N, &W, &L);
        for(int i=0; i<N; i++) {
            scanf("%lld %lld %lld", &X[i], &Y[i], &R[i]);
        }

        init_disjoint_set();

        for(int i=0; i<N; i++) {
            for(int j=0; j<N; j++) {
                Point P1(X[i], Y[i]), P2(X[j], Y[j]);
                //if(i==2 && j==3) cout << i << ", " << j << ": " << circleGeo.circleCircleIntersectionPoints(P1, R[i], P2, R[j]) << endl;
                if(circleGeo.circleCircleIntersectionPoints(P1, R[i], P2, R[j])) {
                   Union(i, j);
                }
            }
        }

//        cout << "Parent contains:\n";
//        for(int i=0; i<N; i++) {
//            cout << i << " = " << parent[i] << endl;
//        }

        memset(mark, 0, sizeof(mark));

        int cnt = 0;
        for(int i=0; i<N; i++) {
            int curr = FindRepresentative(i);
            if(!mark[curr]) {
                if(minX[curr]<=0 && maxX[curr]>=W) {
                    cnt++;
                }
                mark[curr] = 1;
            }
        }

        printf("%d\n", cnt);
    }

    return 0;
}
