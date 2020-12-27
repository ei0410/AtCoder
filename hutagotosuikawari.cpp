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

    ll N, A, B;
    cin >> N >> A >> B;

    ll ans = 0;
    rep (i, N) {
        string s;
        cin >> s;

        ll d;
        cin >> d;


        if (d < A) {
            if (s == "West") {
                ans += (-1)*A;
            } else {
                ans += A;
            }
        } else if (d <= B) {
            if (s == "West") {
                ans += (-1)*d;
            } else {
                ans += d;
            }
        } else {
            if (s == "West") {
                ans += (-1)*B;
            } else {
                ans += B;
            }
        }
    }

    if (ans > 0) {
        cout << "East " << ans << endl;
    } else if (ans < 0) {
        cout << "West " << -1*ans << endl;
    } else {
        cout << 0 << endl;
    }
    return 0;
}