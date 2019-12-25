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

    ll N, NG1, NG2, NG3;
    cin >> N >> NG1 >> NG2 >> NG3;

    if (N == NG1 || N == NG2 || N == NG3) {
        NO;
        return 0;
    }

    for (ll i = 0; i < 100; i++) {
        if (N-3 == NG1 || N-3 == NG2 || N-3 == NG3) {
            if (N-2 == NG1 || N-2 == NG2 || N-2 == NG3) {
                if (N-1 == NG1 || N-1 == NG2 || N-1 == NG3) {
                    NO;
                    return 0;
                }
            } else {
                N-=2;
            }
        } else {
            N-=3;
        }
    }

    if (N > 0) {
        NO;
    } else {
        YES;
    }
    return 0;
}