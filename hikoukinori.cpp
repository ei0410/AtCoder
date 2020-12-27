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

int main(void)
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    ll N, M, X, Y;
    cin >> N >> M >> X >> Y;

    vector<ll> a(N), b(M);
    rep (i, N) {
        cin >> a[i];
    }
    rep (i, M) {
        cin >> b[i];
    }

    ll A = 0;
    ll B = 0;
    ll now = a[0];
    bool port = true;
    while (true) {
        if (port) {
            auto itr = lower_bound(b.begin(), b.end(), now+X);
            now = *itr;
            B++;
            if (itr == b.end()) {
                break;
            }
        } else {
            auto itr = lower_bound(a.begin(), a.end(), now+Y);
            now = *itr;
            A++;
            if (itr == a.end()) {
                break;
            }
        }
        port = !port;
    }

    cout << min(A, B) << endl;
    return 0;
}