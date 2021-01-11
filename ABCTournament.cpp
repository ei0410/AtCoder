#include <bits/stdc++.h> 

using namespace std;

#define YES cout << "YES" << endl;
#define NO  cout << "NO"  << endl;
#define Yes cout << "Yes" << endl;
#define No  cout << "No"  << endl;
 
#define INF INT_MAX
#define LLINF LLONG_MAX
#define MOD 1000000007
#define PI  acos(-1)

using ll  = long long;
using ull = unsigned long long;
using Pii = pair<int, int>;
using Pll = pair<ll, ll>;

#define rep(i, n) for (ll i = 0; i < n; i++)
#define rrep(i, n) for (ll i = (n)-1; i >= 0; i--)

template<class T> inline bool chmin(T& a, T b) {
    if (a > b) {
        a = b;
        return true;
    }
    return false;
}

template<class T> inline bool chmax(T& a, T b) {
    if (a < b) {
        a = b;
        return true;
    }
    return false;
}

int main(void)
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    ll N;
    cin >> N;

    vector<ll> A(pow(2, N));
    rep (i, pow(2, N)) {
        cin >> A[i];
    }

    ll tmp1 = 0;
    ll index1 = 0;
    ll tmp2 = 0;
    ll index2 = 0;
    rep (i, pow(2, N)/2) {
        if (tmp1 < A[i]) {
            tmp1 = A[i];
            index1 = i+1;
        }
    }
    for (ll i = pow(2, N)/2; i < pow(2, N); i++) {
        if (tmp2 < A[i]) {
            tmp2 = A[i];
            index2 = i+1;
        }
    }

    if (tmp1 < tmp2) {
        cout << index1 << endl;
    } else {
        cout << index2 << endl;
    }
    return 0;
}