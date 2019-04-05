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

#define rep(i, n) for (ll i = 0; i < n; i++)
 
int main(int argc, char *argv[])
{
    double C;
    cin >> C;

    double x = 5;

    while (true) {
        double next = x - (x*x - C)/(2*x);
        if (0.001 > abs(next - x)) {
            break;
        }
        x = next;
    }

    cout << x << endl;
    return 0;
}