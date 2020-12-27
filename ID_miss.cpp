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
using Plll = pair<ll, pair<ll, ll>>;
using Pllll = pair<ll, pair<ll, pair<ll, ll>>>;

#define rep(i, n) for (ll i = 0; i < (n); i++)
#define rrep(i, n) for (ll i = (n)-1; i >= 0; i--)

int main(int argc, char *argv[])
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    ll N, M;
    cin >> N >> M;

    vector<Plll> p3;
    rep (i, M) {
        ll P, Y;
        cin >> P >> Y;
        p3.push_back(make_pair(P, make_pair(Y, i+1)));
    }

    sort(p3.begin(), p3.end());

    vector<Pllll> p4;
    ll memo = p3[0].first;
    ll cnt = 1;
    rep (i, M) {
        if (p3[i].first == memo) {
            p4.push_back(make_pair(p3[i].first, make_pair(p3[i].second.first, make_pair(p3[i].second.second, cnt))));
            cnt++;
        } else {
            cnt = 1;
            p4.push_back(make_pair(p3[i].first, make_pair(p3[i].second.first, make_pair(p3[i].second.second, cnt))));
        }
        memo = p3[i].first;
    }

    rep (i, M) {
        ll tmp = p4[i].first;
        p4[i].first = p4[i].second.second.first;
        p4[i].second.second.first = tmp;
    }

    sort(p4.begin(), p4.end());

    rep (i, M) {
        cout << setw(6) << setfill('0') << p4[i].second.second.first << setw(6) << setfill('0') << p4[i].second.second.second << endl;
    }
    return 0;
}