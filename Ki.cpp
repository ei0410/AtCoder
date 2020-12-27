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

vector<ll> to[200005];
vector<ll> ans;

void dfs(ll v, ll p=-1) {
    for (ll u : to[v]) {
        if (u == p) {
            continue;
        }
        ans[u] += ans[v];
        dfs(u, v);
    }
}

int main(int argc, char *argv[])
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    ll N, Q;
    cin >> N >> Q;

    rep (i, N-1) {
        ll a, b;
        cin >> a >> b;
        a--;
        b--;

        to[a].push_back(b);
        to[b].push_back(a);
    }

    ans.resize(N);

    rep (i, Q) {
        ll p, x;
        cin >> p >> x;
        p--;
        ans[p] += x;
    }

    dfs(0);

    rep (i, N) {
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}