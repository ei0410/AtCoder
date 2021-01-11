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
    
    ll ans = 0;
    rep (i, 1000) {
        ll c[3] = {i/100, (i/10)%10, i%10};
        ll cnt = 0;
        rep (j, N) {
            if (S[j] == '0'+c[cnt]) {
                cnt++;
            }
            if (cnt == 3) {
                break;
            }
        }
        if (cnt == 3) {
            ans++;
        }
    }

    cout << ans << endl;
    return 0;
}