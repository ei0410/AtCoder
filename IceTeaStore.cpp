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

    ll Q, H, S, D, N;
    cin >> Q >> H >> S >> D >> N;

    vector<ll> a;
    a.push_back(Q*4);
    a.push_back(Q*2+H*1);
    a.push_back(H*2);
    a.push_back(S);

    ll mi = INF;
    rep (i, a.size()) {
        mi = min(mi, a[i]);
    }

    if (N % 2 == 0) {
        cout << min(mi*N, D*N/2) << endl;
    } else {
        if (2*mi <= D) {
            cout << mi*N << endl;
        } else {
            cout << D*(N/2) + mi << endl;
        }
    }
    return 0;
}