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

ll GCD(ll a, ll b) {
    if (a <= 0 || b <= 0) {
        return -1;
    }
    if (a > b) {
        if (a % b == 0) {
            return b;
        } else {
            GCD(b, a % b);
        }
    } else if (a < b) {
        if (b % a == 0) {
            return a;
        } else {
            GCD(a, b % a);
        }
    } else {
        return a;
    }
}

ll LCM(ll a, ll b) {
    return a / GCD(a, b) * b;
}

int main(int argc, char *argv[])
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    ll A, B, C, D;
    cin >> A >> B >> C >> D;

    ll ans = 0;
    ll a = B/C;
    ll b = B/D;
    ll c = B/LCM(C, D);

    ll d = B - (a+b-c);
    
    A -= 1;
    ll e = A/C;
    ll f = A/D;
    ll g = A/LCM(C, D);

    ll h = A - (e+f-g);

    cout << d-h << endl;
    return 0;
}