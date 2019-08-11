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

    ll N, M;
    cin >> N >> M;

    vector<vector<ll>> jobs(M+1);

    rep (i, N) {
        ll a, b;
        cin >> a >> b;
        if (a > M) {
            continue;
        }

        jobs[M-a].push_back(b);
    }

    priority_queue<ll> pq;
    ll ans = 0;

    rrep (i, M) {
        for (auto j : jobs[i]) {
            pq.push(j);
        }
        
        if (!pq.empty()) {
            ans += pq.top();
            pq.pop();
        }
    }

    cout << ans << endl;
    return 0;
}