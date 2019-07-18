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

ll digit_sum(ll N) {
    ll digit = 0;
    while(N > 0) {
        digit += N%10;
        N /= 10;
    }
    return digit;
}

int main(int argc, char *argv[])
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    ll N, A, B;
    cin >> N >> A >> B;

    int ans = 0;
    for (int i = 1; i <= N; i++) {
        int tmp = digit_sum(i);
        if (tmp >= A && tmp <= B) {
            ans += i;
        }
    }

    cout << ans << endl;
    return 0;
}