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

    string S;
    cin >> S;

    ll ans = 0;
    while (S.size() > 1) {
        if (S.front() == S.back()) {
            S.pop_back();
            S.erase(S.begin());
        } else {
            if (S.front() == 'x') {
                S.erase(S.begin());
                ans++;
            } else if (S.back() == 'x') {
                S.pop_back();
                ans++;
            } else {
                cout << -1 << endl;
                return 0;
            }
        }
    }

    cout << ans << endl;
    return 0;
}