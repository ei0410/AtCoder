#include <bits/stdc++.h> 

using namespace std;

#define YES cout << "YES" << endl;
#define NO  cout << "NO"  << endl;
#define Yes cout << "Yes" << endl;
#define No  cout << "No"  << endl;
 
#define INF INT_MAX
#define LLINF LLONG_MAX
#define MOD 1000000007
#define PI  acos(-1)

using ll  = long long;
using ull = unsigned long long;
using Pii = pair<int, int>;
using Pll = pair<ll, ll>;

#define rep(i, n) for (ll i = 0; i < n; i++)
#define rrep(i, n) for (ll i = (n)-1; i >= 0; i--)

template<class T> inline bool chmin(T& a, T b) {
    if (a > b) {
        a = b;
        return true;
    }
    return false;
}

template<class T> inline bool chmax(T& a, T b) {
    if (a < b) {
        a = b;
        return true;
    }
    return false;
}

ll N, K;
ll T[6][6];

bool flag = false;

void dfs(ll d, ll check) {
    if (d == N) {
        if (check == 0) {
            flag = true;
        }
        return;
    }

    rep (i, K) {
        dfs(d+1, check^T[d][i]);
    }
}

int main(void)
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> N >> K;
    rep (i, N) {
        rep (j, K) {
            cin >> T[i][j];
        }
    }

    dfs(0, 0);
    if (flag) {
        cout << "Found" << endl;
    } else {
        cout << "Nothing" << endl;
    }
    return 0;
}