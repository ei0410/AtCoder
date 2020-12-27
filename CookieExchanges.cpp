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

ll rec (ll a, ll b, ll c, ll n) {
    if (a%2 || b%2 || c%2) {
        return n;
    }

    rec((b+c)/2, (c+a)/2, (a+b)/2, n+1);
}

int main(int argc, char *argv[])
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    ll A, B, C;
    cin >> A >> B >> C;

    if (A == B && B == C) {
        if (A%2) {
            cout << 0 << endl;
            return 0;
        } else {
            cout << -1 << endl;
            return 0;
        }
    }

    cout << rec(A, B, C, 0) << endl;
    return 0;
}