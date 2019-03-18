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

int main(int argc, char *argv[])
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    ll N, M;
    cin >> N >> M;

    ll ans = 0;
    if (N == 1) {
        if (M == 1) {
            ans = 1;
        } else {
            ans = M-2;
        }
    } else {
        if (M == 1) {
            ans = N-2;
        } else {
            ans = (N-2)*(M-2);
        }
    }

    cout << ans << endl;
    return 0;
}