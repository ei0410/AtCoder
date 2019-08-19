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

int main(int argc, char *argv[])
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    ll N;
    cin >> N;

    vector<ll> A(N);
    rep (i, N) {
        cin >> A[i];
    }

    vector<ll> left(N, 0), right(N, 0);
    left[0] = A[0];
    right[N-1] = A[N-1];
    for (ll i = 1; i < N; i++) {
        left[i] = GCD(left[i-1], A[i]);
    }
    for (ll i = N-2; i >= 0; i--) {
        right[i] = GCD(right[i+1], A[i]);
    }

    vector<ll> ans(N, 0);
    ans[0] = right[1];
    ans[N-1] = left[N-2];
    for (ll i = 1; i < N-1; i++) {
        ans[i] = GCD(left[i-1], right[i+1]);
    }

    cout << *max_element(ans.begin(), ans.end()) << endl;
    return 0;
}