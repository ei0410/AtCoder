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

using Graph = vector<vector<ll>>;

int main(void)
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    ll N, M;
    cin >> N >> M;

    Graph G(N);
    rep (i, M) {
        ll a, b;
        cin >> a >> b;
        a--;
        b--;
        G[a].push_back(b);
        G[b].push_back(a);
    }

    vector<ll> ans(N, -1);
    ans[0] = 0;

    vector<ll> seen(N, -1);
    queue<ll> que;

    seen[0] = 0;
    que.push(0);

    while(!que.empty()) {
        ll v = que.front();
        que.pop();

        for (ll next : G[v]) {
            if (seen[next] != -1) {
                continue;
            }

            seen[next] = seen[v] + 1;
            ans[next] = v;
            que.push(next);
        }
    }

    rep (i, N) {
        if (seen[i] == -1) {
            No;
            return 0;
        }
    }

    Yes;
    for (ll i = 1; i < N; i++) {
        cout << ans[i]+1 << endl;
    }
    return 0;
}