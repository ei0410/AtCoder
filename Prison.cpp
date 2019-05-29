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

    ll N, M;
    cin >> N >> M;

    vector<ll> L(M), R(M);
    rep (i, M) {
        cin >> L[i] >> R[i];
    }

    vector<Pii> p;
    for (int i = 0; i < L.size(); i++) {
        p.push_back(make_pair(L[i], R[i]));
    }

    sort(p.begin(), p.end());
    ll head = p[M-1].first;
    for (int i = 0; i < p.size(); i++) {
        int tmp = p[i].first;
        p[i].first  = p[i].second;
        p[i].second = tmp;
    }

    sort(p.begin(), p.end());
    ll tail = p[0].first;

    ll ans = tail - head + 1;
    if (ans > 0) {
        cout << ans << endl;
    } else {
        cout << 0 << endl;
    }
    return 0;
}