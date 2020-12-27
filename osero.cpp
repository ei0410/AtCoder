#include <bits/stdc++.h> 
<<<<<<< HEAD

using namespace std;

#define YES cout << "YES" << endl;
#define NO  cout << "NO"  << endl;
#define Yes cout << "Yes" << endl;
#define No  cout << "No"  << endl;
 
#define INF INT_MAX
#define LLINF LLONG_MAX
=======
 
#define INF (1<<31) - 1 //INT_MAX/2
>>>>>>> origin/master
#define MOD 1000000007
#define PI  acos(-1)

using ll  = long long;
using ull = unsigned long long;
<<<<<<< HEAD
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

    ll N, Q;
    cin >> N >> Q;

    vector<ll> table(200100, 0);
    
    rep (i, Q) {
        ll l, r;
        cin >> l >> r;
        l--;
        table[l]++;
        table[r]--;
    }

    rep (i, table.size()) {
        if (i > 0) {
            table[i] += table[i-1];
        }
    }

    string ans = "";
    rep (i, N) {
        if (table[i]%2 == 0) {
            ans += '0';
        } else {
            ans += '1';
        }
    }

    cout << ans << endl;
=======
using P = std::pair<int, int>;

int main(int argc, char *argv[])
{
    int N, Q;
    std::cin >> N >> Q;
    
    std::vector<int> l(Q), r(Q);
    for (int i = 0; i < Q; i++) {
        std::cin >> l[i] >> r[i];
    }

    std::string s(N, '0');

    for (int i = 0; i < Q; i++) {
        for (int j = l[i]-1; j < r[i]; j++) {
            if (s[j] == '0') {
                s[j] = '1';
            } else {
                s[j] = '0';
            }
        }
    }

    std::cout << s << std::endl;
>>>>>>> origin/master
    return 0;
}