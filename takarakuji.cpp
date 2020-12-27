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

    char E[6];
    rep (i, 6) {
        cin >> E[i];
    }

    char ch;
    cin >> ch;

    char L[6];
    rep (i, 6) {
        cin >> L[i];
    }

    ll cnt = 0;
    bool flag = false;
    rep (i, 6) {
        rep (j, 6) {
            if (E[i] == L[j]) {
                cnt++;
            }
            if (L[i] == ch) {
                flag = true;
            }
        }
    }

    if (cnt == 6) {
        cout << 1 << endl;
    } else if (cnt == 5 && flag) {
        cout << 2 << endl;
    } else if (cnt == 5 && !flag) {
        cout << 3 << endl;
    } else if (cnt == 4) {
        cout << 4 << endl;
    } else if (cnt == 3) {
        cout << 5 << endl;
    } else {
        cout << 0 << endl;
    }
    return 0;
}