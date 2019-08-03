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

    int N;
    cin >> N;

    vector<pair<int, string>> p;
    rep (i, N) {
        string S;
        cin >> S;

        int P;
        cin >> P;
        p.push_back(make_pair(P, S));
    }

    sort(p.begin(), p.end());

    int tmp = 0;
    rep (i, N-1) {
        tmp += p[i].first;
    }

    if (tmp < p[N-1].first) {
        cout << p[N-1].second << endl;
    } else {
        cout << "atcoder" << endl;
    }

    return 0;
}