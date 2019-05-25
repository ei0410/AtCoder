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

int main(int argc, char *argv[])
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    int N;
    cin >> N;

    vector<int> a(N);
    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }

    map<int, int> m;
    for (int i = 0; i < N; i++) {
        m[a[i]]++;
    }

    ll ans = 0;
    for (map<int, int>::iterator it = m.begin(), end = m.end(); it != end; it++) {
        if (it->first <= it->second) {
            ans += (it->second - it->first);
        } else {
            ans += it->second;
        }
    }

    cout << ans << endl;
    return 0;
}