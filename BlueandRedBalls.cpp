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

struct mint {
    ll x;
    mint(ll x=0): x(x%MOD){}
    mint& operator+=(const mint a) {
        if ((x += a.x) >= MOD) {
            x -= MOD;
        }
        return *this;
    }
    mint& operator-=(const mint a) {
        if (x += MOD-a.x >= MOD) {
            x -= MOD;
        }
        return *this;
    }
    mint& operator*=(const mint a) {
        (x *= a.x) %= MOD;
        return *this;
    }
    mint operator+(const mint a) const {
        mint res(*this);
        return res+=a;
    }
    mint operator-(const mint a) const {
        mint res(*this);
        return res-=a;
    }
    mint operator*(const mint a) const {
        mint res(*this);
        return res*=a;
    }
};

#define SIZE 4010
mint c[SIZE][SIZE];
void init() {
    c[0][0] = 1;
    for (int i = 0; i <= 4000; i++) {
        for (int j = 0; j <= i; j++) {
            c[i+1][j] += c[i][j];
            c[i+1][j+1] += c[i][j];
        }
    }
}

mint comb(int n, int k) {
    return c[n][k];
}

mint f2(int n, int k) {
    return comb(n+k-1, k-1);
}

mint f(int n, int k) {
    if (n < k) {
        return 0;
    }
    if (n == 0 && k == 0) {
        return 1;
    }
    if (k < 1) {
        return 0;
    }
    return f2(n-k, k);
}

int main(int argc, char *argv[])
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    init();
    int N, K;
    cin >> N >> K;

    for (int i = 1; i <= K; i++) {
        mint blue = f(K, i);
        mint red = f2(N-K-(i-1), i+1);
        mint ans = blue*red;
        cout << ans.x << endl;
    }
    return 0;
}