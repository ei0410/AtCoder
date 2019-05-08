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

    int N;
    cin >> N;

    int a[25];
    rep (i, N) {
        cin >> a[i];
    }

    int K;
    cin >> K;

    bool exist = false;
    for (int bit = 0; bit < (1<<N); bit++) {
        int sum = 0;
        rep(i, N) {
            if (bit & (1<<i)) {
                sum += a[i];
            }
        }

        if (sum == K) {
            exist = true;
        }
    }

    if (exist) {
        Yes
    } else {
        No
    }
    return 0;
}