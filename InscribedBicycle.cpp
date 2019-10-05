#include <bits/stdc++.h> 

using namespace std;

#define YES cout << "YES" << endl;
#define NO  cout << "NO"  << endl;
#define Yes cout << "Yes" << endl;
#define No  cout << "No"  << endl;
 
#define INF INT_MAX
#define MOD 1000000007
#define PI  acos(-1)

using ll  = long long;
using ull = unsigned long long;
using Pii = pair<int, int>;
using Pll = pair<ll, ll>;

#define rep(i, n) for (ll i = 0; i < (n); i++)
#define rrep(i, n) for (ll i = (n)-1; i >= 0; i--)

int main(int argc, char *argv[])
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    double x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

    double a, b, c;
    a = sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
    b = sqrt((x2-x3)*(x2-x3)+(y2-y3)*(y2-y3));
    c = sqrt((x3-x1)*(x3-x1)+(y3-y1)*(y3-y1));

    double s = (a+b+c)/2.0;
    double r = sqrt(s*(s-a)*(s-b)*(s-c))/s;
    double ans = 0;
    if (a < b) {
        if (b < c) {
            ans = (r*c)/(2.0*r+c);
        } else {
            ans = (r*b)/(2.0*r+b);
        }
    } else {
        if (a < c) {
            ans = (r*c)/(2.0*r+c);
        } else {
            ans = (r*a)/(2.0*r+a);
        }
    }
    
    cout << fixed << setprecision(12) << ans << endl;
    return 0;
}