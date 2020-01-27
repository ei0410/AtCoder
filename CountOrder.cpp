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

    ll N;
    cin >> N;

    vector<ll> P(N), Q(N);
    rep (i, N) {
        cin >> P[i];
    }
    rep (i, N) {
        cin >> Q[i];
    }

    vector<ll> v(N);
    rep (i, N) {
        v[i] = i+1;
    }

    ll pcnt = 0;
    bool pflag = false;
    do {
        pcnt++;
        rep (i, N) {
            if (P[i] != v[i]) {
                break;
            }
            if (i == N-1) {
                pflag = true;
            }
        }

        if (pflag) {
            break;
        }
    } while (next_permutation(v.begin(), v.end()));

    rep (i, N) {
        v[i] = i+1;
    }

    ll qcnt = 0;
    bool qflag = false;
    do {
        qcnt++;
        rep (i, N) {
            if (Q[i] != v[i]) {
                break;
            }
            if (i == N-1) {
                qflag = true;
            }
        }

        if (qflag) {
            break;
        }
    } while (next_permutation(v.begin(), v.end()));

    cout << abs(pcnt-qcnt) << endl;
    return 0;
}