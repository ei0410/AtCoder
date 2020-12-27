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

#define MAX_N 50

ll N, M;
ll a[MAX_N];
ll b[MAX_N];

bool d[MAX_N][MAX_N];
bool seen[MAX_N];

void dfs(ll v) {
    seen[v] = true;
    rep (v2, N) {
        if (!d[v][v2] || seen[v2]) {
            continue;
        }
        dfs(v2);
    }
}

int main(int argc, char *argv[])
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> N >> M;

    rep (i, M) {
        cin >> a[i] >> b[i];
        a[i]--;
        b[i]--;
        d[a[i]][b[i]] = true;
        d[b[i]][a[i]] = true;
    }

    ll ans = 0;
    rep (i, M) {
        d[a[i]][b[i]] = false;
        d[b[i]][a[i]] = false;

        rep (j, N) {
            seen[j] = false;
        }

        dfs(0);

        rep (j, N) {
            if (!seen[j]) {
                ans++;
                break;
            }
        }
        d[a[i]][b[i]] = true;
        d[b[i]][a[i]] = true;
    }

    cout << ans << endl;
    return 0;
}