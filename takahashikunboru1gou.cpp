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

double A, B, C;

double func(double t) {
    return A*t+B*sin(C*t*PI);
}

int main(int argc, char *argv[])
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> A >> B >> C;

    double i;
    for (i = 0; i <= 10000; i++) {
        if (func(i) >= 100) {
            break;
        }
    }

    double l = i-1;
    double r = i;

    rep (i, 10000) {
        double mid = (l+r)/2;
        if (func(mid) >= 100) {
            r = mid;
        } else {
            l = mid;
        }
    }

    cout << setprecision(15) << l << endl;
    return 0;
}
