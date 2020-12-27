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

ll dy[4] = {0, 1, 0, -1};
ll dx[4] = {1, 0, -1, 0};

int main(void)
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    ll H, W;
    cin >> H >> W;

    vector<string> A(H);
    rep (i, H) {
        cin >> A[i];
    }

    queue<tuple<ll, ll, ll>> q;
    rep (i, H) {
        rep (j, W) {
            if (A[i][j] == '#') {
                q.push({i, j, 0});
            }
        }
    }

    ll ans = 0;
    vector<vector<bool>> check(H, vector<bool>(W, false));

    while(!q.empty()) {
        ll i = get<0>(q.front());
        ll j = get<1>(q.front());
        ll d = get<2>(q.front());
        q.pop();

        if (check[i][j]) {
            continue;
        }
        check[i][j] = true;
        ans = max(ans, d);
        rep (k, 4) {
            ll nexti = i+dx[k];
            ll nextj = j+dy[k];

            if (nexti < 0 || H <= nexti || nextj < 0 || W <= nextj) {
                continue;
            }
            if (check[nexti][nextj] || A[nexti][nextj] == '#') {
                continue;
            }

            A[i][j] = '#';
            q.push({nexti, nextj, d+1});
        }
    }

    cout << ans << endl;
    return 0;
}