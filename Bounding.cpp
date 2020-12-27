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

    ll N, X;
    cin >> N >> X;

    vector<ll> L(N); 
    rep (i, N) {
        cin >> L[i];
    }

    ll count = 0;
    ll sum = 0;
    rep (i, N+1) {
        if (X >= sum) {
            count++;
        }
        sum += L[i];
    }

    cout << count << endl;
    return 0;
}