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

ll N, M;
cin >> N >> M;

#define MAX_N 100
#define MAX_M 100
char field[MAX_N][MAX_M+1];

void dfs(ll x, ll y) {
    field[x][y] = '.';

    for (ll dx = -1; dx <= 1; dx++) {
        for (ll dy = -1; dy <= 1; dy++) {
            ll nx = x + dx, ny = y + dy;
            if (0 <= nx && nx < N && 0 <= ny && ny < M && field[nx][ny] == 'W') {
                dfs(nx, ny);
            }
        }
    }
}
 
int main(void)
{
    ll ans = 0;
    rep (i, N) {
        rep (j, M) {
            if (field[i][j] == 'W') {
                dfs(i, j);
                ans++;
            }
        }
    }

    cout << ans << endl;
    return 0;
}