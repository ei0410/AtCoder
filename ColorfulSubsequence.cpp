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

    ll N;
    cin >> N;

    string S;
    cin >> S;

    map<char, ll> m;
    for (ll i = 0; i < N; i++) {
        m[S[i]]++;
    }

    ll ans = 1;
    for (map<char, ll>::iterator it = m.begin(), end = m.end(); it != end; it++) {
        ans *= (it->second + 1);
        ans %= MOD;
    }

    cout << ans - 1 << endl;
    return 0;
}