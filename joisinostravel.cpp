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

int N, M, R;
int d[201][201];
int r[9];
int A, B, C;
int ans = 0;
bool used[9];

void dfs(int c, int las, int dist) {
    if (c==R+1) {
        ans = min(ans, dist);
        return 0;
    }

    for (int i = 1; i <= R; i++) {
        if (!used[i]) {
            used[i] = true;
            if (las == -1) {
                dfs(c+1, i, 0);
            } else {
                dfs(c+1, i, dist+d[r[las]][r[i]]);
            }
            used[i] = false;
        }
    }
}

int main(int argc, char *argv[])
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> N >> M >> R;

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            if (i != j) {
                d[i][j] = INF;
            }
        }
    }

    for (int i = 1; i <= R; i++) {
        cin >> r[i];
    }

    for (int i = 1; i <= M; i++) {
        cin >> A >> B >> C;
        if (d[A][B] > C) {
            d[A][B] = d[B][A] = C;
        }
    }

    for (int k = 1; k <= N; k++) {
        for (int i = 1; i <= N; i++) {
            for (int j = 1; j <= N; j++) {
                d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
            }
        }
    }

    ans = INF;
    dfs(1, -1, 0);
    cout << ans << endl;
    return 0;
}