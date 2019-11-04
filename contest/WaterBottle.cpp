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

    double a, b, x;
    cin >> a >> b >> x;

    double num = 100;
    ll memo = 0;
    for (double i = 0; i <= b; i += 0.000001) {
        double tmp = a*a*(b+i)/2.0;
        if (abs(tmp-x) < num) {
            num = i;
            memo = 1;
        }
    }

    for (double i = 0; i <= a; i += 0.000001) {
        double tmp = a*b*i/2.0;
        if (abs(tmp-x) < num) {
            num = i;
            memo = -1;
        }
    }
    
    cout << memo << " " << num << endl;
    return 0;
}