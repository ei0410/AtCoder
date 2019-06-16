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

#define rep(i, n) for (ll i = 0; i < n; i++)

int main(int argc, char *argv[])
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    ll N, A, B, C, D;
    cin >> N >> A >> B >> C >> D;

    string S;
    cin >> S;

    S = '#' + S + '#';

    rep (i, N-1) {
        if (S[i] == '#' && S[i+1] == '#') {
            No
            return 0;
        }
    }

    if (D < C) {
        for (ll i = B; i <= D; i++) {
            if (S[i-1] == '.' && S[i] == '.' && S[i+1] == '.') {
                Yes
                return 0;
            }
        }
        No
        return 0;
    }
    Yes
    return 0;
}