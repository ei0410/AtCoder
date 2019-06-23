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

using Psll = pair<string, Pll>;

int main(int argc, char *argv[])
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    ll N;
    cin >> N;

    vector<Psll> p;
    rep (i, N) {
        string S;
        ll P;
        cin >> S >> P;
        p.push_back(make_pair(S, make_pair(-P, i+1)));
    }

    sort(p.begin(), p.end());

    rep (i, N) {
        cout << p[i].second.second << endl;
    }
    return 0;
}