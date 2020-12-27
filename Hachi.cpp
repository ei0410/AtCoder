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

int main(void)
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    string S;
    cin >> S;

    if (S.size() == 1) {
        if (S[0] == '8') {
            Yes;
        } else {
            No;
        }
        return 0;
    } else if (S.size() == 2) {
        if (stol(S)%8 == 0) {
            Yes;
        } else {
            swap(S[0], S[1]);
            if (stol(S)%8 == 0) {
               Yes;
            } else {
                No;
            }
        }
        return 0;
    } else {
        map<ll, ll> m;
        rep (i, S.size()) {
            m[S[i] - '0']++;
        }

        for (ll i = 112; i < 1000; i+=8) {
            map<ll, ll> m2;
            string tmp = to_string(i);

            rep (j, tmp.size()) {
                m2[tmp[j] - '0']++;
            }

            bool flag = false;
            rep (j, 10) {
                if (m2[j] != 0) {
                    if (m2[j] > m[j]) {
                        break;
                    }
                }
                if (j == 9) {
                    flag = true;
                }
            }
            if (flag) {
                Yes;
                return 0;
            }
        }
    }

    No;
    return 0;
}