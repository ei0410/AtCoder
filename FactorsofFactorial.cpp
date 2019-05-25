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

map<int, int> m;

void prime_factor(int n) {
    for (int i = 2; i*i <= n; i++) {
        while (n % i == 0) {
            m[i]++;
            n /= i;
        }
    }

    if (n != 1) {
        m[n]++;
    }

    return;
}

int main(int argc, char *argv[])
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    ll N;
    cin >> N;

    ll ans = 1;
    for (int i = 1; i <= N; i++) {
        prime_factor(i);
    }

    for (int i = 1; i <= N; i++) {
        ans = ans*(m[i]+1) % MOD;
    }

    cout << ans << endl;
    return 0;
}