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

    vector<ll> A(N);
    rep (i, N) {
        cin >> A[i];
    }

    vector<ll> B(M), C(M);
    rep (i, M) {
        cin >> B[i] >> C[i];
    }

    priority_queue<Pll> pq;
    rep (i, N) {
        pq.push(make_pair(A[i], 1));
    }

    rep (i, M) {
        pq.push(make_pair(C[i], B[i]));
    }

    ll ans = 0;
    rep (i, N) {
        Pll p = pq.top();
        pq.pop();
        ans += p.first; 
        if (p.second > 1) {
            p.second--;
            pq.push(p);
        }
    }

    cout << ans << endl;
    return 0;
}