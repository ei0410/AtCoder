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

#define MAX_N 2010

using Graph = vector<vector<ll>>;

int main(void)
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    ll N, X, Y;
    cin >> N >> X >> Y;

    Graph G(N);
    rep (i, N-1) {
        G[i].push_back(i+1);
        G[i+1].push_back(i);
    }

    X--;
    Y--;
    G[X].push_back(Y);
    G[Y].push_back(X);

    vector<ll> ans(MAX_N, 0);
    rep (i, N) {
        vector<ll> d(N, -1);
        queue<ll> que;

        d[i] = 0;
        que.push(i);

        while (!que.empty()) {
            ll v = que.front();
            que.pop();

            for (auto next : G[v]) {
                if (d[next] != -1) {
                    continue;
                }

                d[next] = d[v]+1;
                que.push(next);
            }
        }

        rep (j, N) {
            ans[d[j]]++;
        }
    }

    for (ll i = 1; i < N; i++) {
        cout << ans[i]/2 << endl;
    }
    return 0;
}