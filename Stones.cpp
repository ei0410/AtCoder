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

    ll N;
    cin >> N;

    string S;
    cin >> S;

    vector<ll> black(N+1, 0), white(N+1, 0);
    rep (i, N) {
        if (S[i] == '.') {
            black[i+1] = black[i];
            white[i+1] = white[i]+1;
        } else if (S[i] == '#') {
            black[i+1] = black[i]+1;
            white[i+1] = white[i];
        }
    }

    ll ans = N;
    rep (i, N+1) {
        ans = min(ans, black[i]+white[N]-white[i]);
    }

    cout << ans << endl;
    return 0;
}