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
    cin.tie(0);
    ios::sync_with_stdio(false);

    double N, K;
    cin >> N >> K;

    double ans = 0;
    for (int i = 1; i <= N; i++) {
        int j = i;
        double tmp = 1;
        while (K > j) {
            j *= 2;
            tmp *= 0.5;
        }
        ans += tmp;
    }

    ans /= N;
    cout << setprecision(10) << ans << endl;
    return 0;
}