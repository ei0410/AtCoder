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

#define rep(i, n) for (ll i = 0; i < n; i++)
#define rrep(i, n) for (ll i = (n)-1; i >= 0; i--)
 
int main(void)
{
    vector<ll> a = {1, 3, 2};
    vector<ll> b = {5, 4, 6};
    vector<ll> c = {9, 8, 7};
    vector<Plll> p;

    rep (i, a.size()) {
        p.push_back(make_pair(a[i], make_pair(b[i], c[i])));
    }

    rep (i, p.size()) {
        cout << p[i].first << ":" << p[i].second.first << ":" << p[i].second.second << endl;
    }

    sort(p.begin(), p.end());
    // sort(p.rbegin(), p.rend());

    rep (i, p.size()) {
        cout << p[i].first << ":" << p[i].second.first << ":" << p[i].second.second << endl;
    }

    rep (i, p.size()) {
        ll tmp = p[i].first;
        p[i].first  = p[i].second.first;
        p[i].second.first = tmp;
    }

    rep (i, p.size()) {
        cout << p[i].first << ":" << p[i].second.first << ":" << p[i].second.second << endl;
    }

    sort(p.begin(), p.end());
    // sort(p.rbegin(), p.rend());

    rep (i, p.size()) {
        cout << p[i].first << ":" << p[i].second.first << ":" << p[i].second.second << endl;
    }

    rep (i, p.size()) {
        ll tmp = p[i].first;
        p[i].first  = p[i].second.second;
        p[i].second.second = tmp;
    }

    rep (i, p.size()) {
        cout << p[i].first << ":" << p[i].second.first << ":" << p[i].second.second << endl;
    }

    sort(p.begin(), p.end());
    // sort(p.rbegin(), p.rend());

    rep (i, p.size()) {
        cout << p[i].first << ":" << p[i].second.first << ":" << p[i].second.second << endl;
    }
    return 0;
}